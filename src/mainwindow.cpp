#include <QCoreApplication>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->setGeometry(QRect(QPoint(100, 100), QSize(640, 480)));
    button = new QPushButton("Click", this);
    button->setGeometry(QRect(QPoint(100, 100), QSize(100, 20)));
    connect(button, SIGNAL (released()), this, SLOT (handleButton()));
}

void MainWindow::handleButton() {
    button->setText(QString::number(++cnt));
}

MainWindow::~MainWindow() {
    delete button;
}
