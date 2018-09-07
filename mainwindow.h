#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "priority_queue.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_add_clicked();

    void on_update_clicked();

    void on_update_2_clicked();

private:
    Ui::MainWindow *ui;
    Priority_Queue *queue;
};

#endif // MAINWINDOW_H
