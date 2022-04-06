#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setButtonIcon();
    setButtonIconAlign();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setButtonIcon()
{
    QImage img;
    QPixmap pixmap;

    img.load(":/setup.png");
    pixmap = QPixmap::fromImage(img).scaled(30, 30);

    ui->pushButton_6->setIcon(QIcon(pixmap));
    ui->pushButton_6->setIconSize(QSize(30, 30));
}

void MainWindow::setButtonIconAlign()
{
    QImage img;
    QPixmap pixmap;

    img.load(":/setup.png");
    pixmap = QPixmap::fromImage(img).scaled(30, 30);

    ui->pushButton_7->setPixmap(pixmap);
}

