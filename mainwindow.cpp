#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pair<std::string,int> p("北京",0);
    hashmap.Insert(p);
    std::string s="北京";
    qDebug()<<hashmap.getValue(s);
}

MainWindow::~MainWindow()
{
    delete ui;
}

