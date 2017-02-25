#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Setting default bar values
    ui->barOne->setValue(0);
    ui->barTwo->setValue(0);

    switchBar = false;

    // Connect First Bar
    connect(ui->hSlider, SIGNAL(valueChanged(int)), ui->barOne, SLOT(setValue(int)));
    qDebug() << "Checked";
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_changeBar_clicked() {
    if(switchBar == false) {
        disconnect(ui->hSlider, SIGNAL(valueChanged(int)), ui->barOne, SLOT(setValue(int)));
        connect(ui->hSlider, SIGNAL(valueChanged(int)), ui->barTwo, SLOT(setValue(int)));
        switchBar = true;
    } else {
        disconnect(ui->hSlider, SIGNAL(valueChanged(int)), ui->barTwo, SLOT(setValue(int)));
        connect(ui->hSlider, SIGNAL(valueChanged(int)), ui->barOne, SLOT(setValue(int)));
        switchBar = false;
    }
}
