#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "databaseconnection.h"
#include <QMainWindow>
#include <QtSql>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void pageChange(int page);
    void loadBusTable();
public slots:
    void on_routeBtn_clicked();
    void on_issueBtn_clicked();
    void on_busBtn_clicked();
    void on_reportBtn_clicked();
    void on_userBtn_clicked();
    void on_mapBtn_clicked();
    void on_homeBtn_clicked();
private:
    Ui::MainWindow *ui;
    // Connecting the databaseconnecion.h
    // Retireving the databaseconnecion.h class path to a pointer
    DatabaseConnection *bus_dbConnection;
};
#endif // MAINWINDOW_H
