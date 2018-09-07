#include "mainwindow.h"
#include <QApplication>
#include "tasks.h"
#include <QDebug>
#include <QVector>
#include "priority_queue.h"
#include <iostream>
#include <vector>
#include <queue>
#include <QTime>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


//    tasks *task =new tasks(&w,QString("a"),QString("2"),QString("0"),QString("0"),QString("5"),QString("F"));
//    tasks *task1=new tasks(&w,QString("b"),QString("2"),QString("0"),QString("0"),QString("5"),QString("F"));
//    tasks *task2=new tasks(&w,QString("c"),QString("2"),QString("1"),QString("0"),QString("5"),QString("F"));
//    tasks *task3=new tasks(&w,QString("d"),QString("2"),QString("2"),QString("0"),QString("5"),QString("F"));





//     Priority_Queue  *q=new Priority_Queue();
//     q->addTask(task);
//     q->addTask(task1);
//     q->addTask(task2);
//     q->addTask(task3);
//     qDebug()<<"init:"<<q->top()->get_info();









     qDebug()<<QTime::currentTime();
    return a.exec();
}
