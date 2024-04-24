/***********************************************
**
**  Source Code Developed By: Gerald M. Milanzi
**
***********************************************/

#include "databaseconnection.h"
#include <QApplication>
#include <QString>

DatabaseConnection::DatabaseConnection()
{
    this->setDatabaseName("mwendokasi");
    //QString applicationDirPath = QApplication::applicationDirPath() + "/BusTrackingSystem.db";
    //QString applicationDirPath ="C:/Users/Dell/Desktop/BusTracking/BusTrackingSystem.db";
    QString applicationDirPath ="C:/Users/Pc/Desktop/BusTracking/BusTrackingSystem.db";
    this->setDatabaseDBFilePath(applicationDirPath);

}
/* Setter Methods */

void DatabaseConnection::setDatabaseName(QString databaseName){
    this->databaseName = databaseName;
}
void DatabaseConnection::setDatabaseDBFilePath(QString databaseDBFilePath){
    this->databaseDBFilePath = databaseDBFilePath;
}

/* Getter Methods */

QString DatabaseConnection::getDatabaseName(){
    return databaseName;
}

QString DatabaseConnection::getDatabaseDBFilePath(){
    return databaseDBFilePath;
}

/* Function Methods */
// Function to open database connection
bool DatabaseConnection::openDatebaseConnection(){

    // Check if the default connection already exists
    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        // If the connection doesn't exist, add it
        databaseConnection = QSqlDatabase::addDatabase("QSQLITE");
        databaseConnection.setDatabaseName(this->databaseDBFilePath);

        // Establishing database connection and checking connection status
        if (!databaseConnection.open()){
            //qWarning() << "Database Connection Error";
            //qWarning() << databaseConnection.lastError();
            return false;
        }
        else{
            //qWarning() << "Database Connection Open";
            return true;
        }
    }
    return true;
}


// Function to close database connection
void DatabaseConnection::closeDatebaseConnection(){

    // Closing established database connection
    databaseConnection.close();
    databaseConnection.removeDatabase(QSqlDatabase::defaultConnection);
    //qWarning() << "Database Connection Closed";

}

