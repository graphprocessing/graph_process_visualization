// Copyright [year] <Copyright Owner>
#ifndef INCLUDE_MAINWINDOW_H_
#define INCLUDE_MAINWINDOW_H_
#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow {
 private:
    Q_OBJECT
 public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

 private slots: // NOLINT
    void handleButton();

 private:
    QPushButton *button;
    int cnt = 0;
};

#endif  // INCLUDE_MAINWINDOW_H_
