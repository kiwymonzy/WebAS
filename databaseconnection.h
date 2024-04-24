/***********************************************
**
**  Source Code Developed By: Gerald M. Milanzi
**
***********************************************/

#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QApplication>
#include "headers.h"
using namespace std;
namespace Ui { class MainWindow; }

class DatabaseConnection
{
public:
    // Default constructor
    DatabaseConnection();
    // Setter Methods
    void setDatabaseName(QString databaseName);
    void setMapDatabaseName(QString mapDatabaseName);
    void setDatabaseDBFilePath(QString databaseDBFilePath);
    // Getter Methods
    QString getDatabaseName();
    QString getDatabaseDBFilePath();
    // Function Methods
    bool openDatebaseConnection();
    void closeDatebaseConnection();
    bool openMapConnection();

private:
    // Public variables declaration
    QString databaseName;
    QString databaseDBFilePath;
    // Object Declaration
    QSqlDatabase databaseConnection;

};

#endif // DATABASECONNECTION_H
