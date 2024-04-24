#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Creating an object of All class
    bus_dbConnection = new DatabaseConnection();
    bus_dbConnection->openDatebaseConnection();

    //pageChange(0);
    //loadBusTable();
    //ui->stackedWidget->setCurrentIndex(0);
    //ui->Bus_stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pageChange(int page)
{
    if(page == 0){//HOME
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "background-color: #282c34;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/blueIcons/home.svg);\n"
                                   "border-top-left-radius: 20px;\n"
                                   "");
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/map.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/users.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/whiteIcons/book-open.svg);\n"
                                     "border-bottom: 1px solid #282c34;\n"
                                     "");
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/truck.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/file.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/navigation.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }else if(page == 1){//MAP
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "background-color: #282c34;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:icons/blueIcons/map.svg);\n"
                                  "border-top-left-radius: 20px;\n"
                                  "");
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/home.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/users.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/whiteIcons/book-open.svg);\n"
                                     "border-bottom: 1px solid #282c34;\n"
                                     "");
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/truck.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/file.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/navigation.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }else if(page == 2){//USER
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "background-color: #282c34;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/blueIcons/users.svg);\n"
                                   "border-top-left-radius: 20px;\n"
                                   "");
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/home.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/map.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/whiteIcons/book-open.svg);\n"
                                     "border-bottom: 1px solid #282c34;\n"
                                     "");
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/truck.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/file.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/navigation.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }else if(page == 3){//REPORT
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "background-color: #282c34;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/blueIcons/book-open.svg);\n"
                                     "border-top-left-radius: 20px;\n"
                                     "");
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/home.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/map.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/users.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/truck.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/file.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/navigation.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }else if(page == 4){//BUS
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "background-color: #282c34;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/blueIcons/truck.svg);\n"
                                  "border-top-left-radius: 20px;\n"
                                  "");
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/home.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/map.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/users.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/whiteIcons/book-open.svg);\n"
                                     "border-bottom: 1px solid #282c34;\n"
                                     "");
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/file.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/navigation.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }else if(page == 5){//ISSUE
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "background-color: #282c34;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/blueIcons/file.svg);\n"
                                    "border-top-left-radius: 20px;\n"
                                    "");
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/truck.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/home.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/map.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/users.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/whiteIcons/book-open.svg);\n"
                                     "border-bottom: 1px solid #282c34;\n"
                                     "");
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/navigation.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }else if(page == 6){//ROUTE
        ui->routeBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "background-color: #282c34;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/blueIcons/navigation.svg);\n"
                                    "border-top-left-radius: 20px;\n"
                                    "");
        ui->busBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/truck.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->homeBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/home.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->mapBtn->setStyleSheet("\n"
                                  "color: #fff;\n"
                                  "padding: 10px;	\n"
                                  "text-align: left;\n"
                                  "qproperty-icon: url(:/icons/whiteIcons/map.svg);\n"
                                  "border-bottom: 1px solid #282c34;\n"
                                  "");
        ui->userBtn->setStyleSheet("\n"
                                   "color: #fff;\n"
                                   "padding: 10px;	\n"
                                   "text-align: left;\n"
                                   "qproperty-icon: url(:/icons/whiteIcons/users.svg);\n"
                                   "border-bottom: 1px solid #282c34;\n"
                                   "");
        ui->reportBtn->setStyleSheet("\n"
                                     "color: #fff;\n"
                                     "padding: 10px;	\n"
                                     "text-align: left;\n"
                                     "qproperty-icon: url(:/icons/whiteIcons/book-open.svg);\n"
                                     "border-bottom: 1px solid #282c34;\n"
                                     "");
        ui->issueBtn->setStyleSheet("\n"
                                    "color: #fff;\n"
                                    "padding: 10px;	\n"
                                    "text-align: left;\n"
                                    "qproperty-icon: url(:/icons/whiteIcons/file.svg);\n"
                                    "border-bottom: 1px solid #282c34;\n"
                                    "");
    }
}

///////////////////// TABS
///
void MainWindow::on_homeBtn_clicked()
{
    pageChange(0);
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_mapBtn_clicked()
{
    pageChange(1);
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_userBtn_clicked()
{

    pageChange(2);
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_reportBtn_clicked()
{
    pageChange(3);
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_busBtn_clicked()
{
    pageChange(4);
    loadBusTable();
    ui->stackedWidget->setCurrentIndex(4);
    ui->Bus_stackedWidget->setCurrentIndex(0);

}
void MainWindow::on_issueBtn_clicked()
{
    pageChange(5);
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_routeBtn_clicked()
{
    pageChange(6);
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::loadBusTable() {
    //emit myCounts();
    // Clear any existing content in the table widget
    ui->bus_tableWidget->clear();
    // Set the column count for the table widget
    ui->bus_tableWidget->setColumnCount(6);
    // Set the horizontal header labels
    ui->bus_tableWidget->setHorizontalHeaderLabels({
        "S/N", "LicensePlate", "RouteName", "Chassis Number", "Service Status", "Action"
    });
    //Table Properties
    ui->bus_tableWidget->resizeColumnsToContents();
    ui->bus_tableWidget->verticalHeader()->setVisible(false);
    ui->bus_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->bus_tableWidget->setEditTriggers( QAbstractItemView::NoEditTriggers);
    ui->bus_tableWidget->setSelectionBehavior( QAbstractItemView::SelectRows);

    bool databaseConnectedCategory = bus_dbConnection->openDatebaseConnection();

    if (databaseConnectedCategory) {
        // Declaring new QSqlQuery object by passing the database name
        QSqlQuery busViewQuery(QSqlDatabase::database(bus_dbConnection->getDatabaseName()));

        QString sql = R"(
                SELECT
                    Bus.BusID,
                    Bus.LicensePlate,
                    Route.RouteName,
                    Bus.ChassisNo,
                    ServiceAvailable.ServiceAvailable
                FROM Bus
                INNER JOIN BusType AS BusTypeBus ON Bus.btBusTypeID = BusTypeBus.BusTypeID
                INNER JOIN ServiceAvailable ON Bus.saServiceAvailableID = ServiceAvailable.ServiceAvailableID
                LEFT JOIN Route ON Bus.rRouteID = Route.RouteID
                INNER JOIN BusType AS BusTypeRoute ON Bus.btBusTypeID = BusTypeRoute.BusTypeID
                ORDER BY Bus.BusID DESC;
            )";
            // Preparing sql query for execution
        busViewQuery.prepare(sql);

        // Executing sql query and checking the status
        if (!busViewQuery.exec()) {
            qWarning() << "SQL query execution error";
            qWarning() << busViewQuery.lastError();
        } else {
            int count = 0;
            while ( busViewQuery.next() ) {
                ui->bus_tableWidget->insertRow(count);
                for ( int c = 0; c <= ui->bus_tableWidget->columnCount(); c++ ) {
                    // Fetching data from the query
                    QString busID = busViewQuery.value("BusID").toString();
                    QString licensePlate = busViewQuery.value("LicensePlate").toString();
                    QString routeName = busViewQuery.value("RouteName").toString();
                    QString chassisNo = busViewQuery.value("ChassisNo").toString();
                    QString serviceAvailable = busViewQuery.value("ServiceAvailable").toString();

                    ui->label_14->setText(licensePlate);
                    // Add items to the table widget
                    ui->bus_tableWidget->setItem(count, 0, new QTableWidgetItem(busID));
                    ui->bus_tableWidget->setItem(count, 1, new QTableWidgetItem(licensePlate));
                    ui->bus_tableWidget->setItem(count, 2, new QTableWidgetItem(routeName));
                    ui->bus_tableWidget->setItem(count, 3, new QTableWidgetItem(chassisNo));
                    ui->bus_tableWidget->setItem(count, 4, new QTableWidgetItem(serviceAvailable));

                    //ACTTION BUTTON CUSTOMIZE
                    QPushButton *viewBusButton = new QPushButton();
                    viewBusButton->setMinimumSize(QSize(20, 30));
                    viewBusButton->setMaximumSize(QSize(20, 30));
                    QFont fontViewBus;
                    fontViewBus.setPointSize(13);
                    viewBusButton->setFont(fontViewBus);
                    viewBusButton->setStyleSheet(QString::fromUtf8("background-color: #3498db;color:black;"));
                    QIcon icon6;
                    icon6.addFile(QString::fromUtf8(":/blueIcons/icons/blueIcons/location.svg"), QSize(), QIcon::Normal, QIcon::Off);
                    viewBusButton->setIcon(icon6);
                    viewBusButton->setIconSize(QSize(15, 15));

                    QPushButton *editBusButton = new QPushButton("Edit");
                    editBusButton->setMinimumSize(QSize(50, 30));
                    editBusButton->setMaximumSize(QSize(90, 30));
                    QFont fontEditBus;
                    fontEditBus.setPointSize(13);
                    editBusButton->setFont(fontEditBus);
                    editBusButton->setStyleSheet(QString::fromUtf8("background-color: #DB3511;color:black;"));

                    QPushButton *deleteBusButton = new QPushButton("Delete");
                    deleteBusButton->setMinimumSize(QSize(50, 30));
                    deleteBusButton->setMaximumSize(QSize(90, 30));
                    QFont fontDeleteBus;
                    fontDeleteBus.setPointSize(13);
                    deleteBusButton->setFont(fontDeleteBus);
                    deleteBusButton->setStyleSheet(QString::fromUtf8("background-color: #8fce00;color:black;"));


                    // Connect signals for button clicks
                    //connect(viewBusButton, &QPushButton::clicked, this, [this, busID]() {
                    //    onViewBusHistoryButtonClicked(busID.toInt());
                    //});

                    //connect(editBusButton, &QPushButton::clicked, this, [this, busID]() {
                    //    onEditBusButtonClicked(busID.toInt());
                    //});

                    //connect(deleteBusButton, &QPushButton::clicked, this, [this, busID]() {
                    //    onDeleteBusButtonClicked(busID.toInt());
                    //});


                    // Create a widget to hold the buttons
                    QWidget *buttonWidget = new QWidget();
                    QHBoxLayout *buttonLayout = new QHBoxLayout(buttonWidget);
                    buttonLayout->addWidget(viewBusButton);
                    buttonLayout->addWidget(editBusButton);
                    buttonLayout->addWidget(deleteBusButton);
                    buttonLayout->setContentsMargins(0, 0, 0, 0); // Set layout margins to zero

                    // Set the button widget to stretch inside the cell
                    buttonLayout->setStretch(0, 1);
                    buttonLayout->setStretch(1, 1);

                    // Add the widget with buttons to the cell
                    ui->bus_tableWidget->setCellWidget(count, 5, buttonWidget);
                }
                ui->bus_tableWidget->setRowHeight( count , 50 );
                count++;
            }
            // Assuming you have a QTableWidget called bus_tableWidget
            // Set the alignment for each cell to center

            for (int row = 0; row < ui->bus_tableWidget->rowCount(); ++row) {
                for (int col = 0; col < ui->bus_tableWidget->columnCount(); ++col) {
                    QTableWidgetItem* item = ui->bus_tableWidget->item(row, col);
                    if (item) {
                        // Set both horizontal and vertical alignment to center
                        item->setTextAlignment(Qt::AlignCenter);
                    } else {
                        // If there is no item at this position, create one and set alignment
                        item = new QTableWidgetItem();
                        item->setTextAlignment(Qt::AlignCenter);
                        ui->bus_tableWidget->setItem(row, col, item);
                    }
                }
            }
            while( count < ui->bus_tableWidget->rowCount() ){
                ui->bus_tableWidget->removeRow( count );
            }

        }
    } else {
        qWarning() << "Database Connection Error";
    }
}
