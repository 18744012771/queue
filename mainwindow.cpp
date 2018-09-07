#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tasks.h"
#include<QTime>
    MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
        queue=new Priority_Queue(this);
    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }

void MainWindow::on_add_clicked()
{
    QString name=ui->addtask->text();
    QString start=ui->addstart->text();
    QString end=ui->addend->text();
    QString priority = ui->addpriority->text();
    QTime current= QTime::currentTime();

    tasks *task= new tasks(this,name,start,end,priority, current.toString(),"0");
    queue->addTask(task);
}

void MainWindow::on_update_clicked()
{
    QString name=ui->updatetask->text();
    QString start=ui->updatestart->text();
    QString end=ui->updateend->text();
    QString priority = ui->updatepriority->text();
    //QTime current= QTime::currentTime();
    tasks *task= queue->findByName(name);
    if(start!=QString(""))
        task->set_start(start.toInt());
    if(end!=QString(""))
        task->set_end(end.toInt());
    if(priority!=QString(""))
        task->set_priority(priority.toInt());
    queue->refresh();



}

void MainWindow::on_update_2_clicked()
{
    queue->deleteAll();
}
