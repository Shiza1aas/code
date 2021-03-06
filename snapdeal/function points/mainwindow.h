#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_ufpButton_released();
    void on_cafButton_released();
    void on_fpButton_released();

private:
    Ui::MainWindow *ui;
    int factorToScale(QString text);
};

#endif // MAINWINDOW_H
