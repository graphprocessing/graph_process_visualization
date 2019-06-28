#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow {
private:
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleButton();

private:
    QPushButton *button;
    int cnt = 0;
};

#endif // MAINWINDOW_H
