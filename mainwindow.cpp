#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    currentPicture = new QPixmap;


    ui->musicfengmian->setAutoFillBackground(true);
    QPalette palette= ui->musicfengmian->palette();
    palette.setBrush(QPalette::Window,QPixmap("/home/wakasann/图片/1_120407153647_2.jpg"));
    ui->musicfengmian->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}
