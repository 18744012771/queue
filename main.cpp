#include "mainwindow.h"
#include <QApplication>
#include "tasks.h"
#include <QDebug>
#include <QVector>
#include "queue.h"
#include <iostream>
#include <vector>
#include <queue>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QVector<tasks*> vec;
    tasks *task =new tasks(&w,QString("1"),QString("2"),QString("0"),QString("0"),QString("5"),QString("F"));
    tasks *task1=new tasks(&w,QString("2"),QString("2"),QString("0"),QString("0"),QString("5"),QString("F"));
    tasks *task2=new tasks(&w,QString("4"),QString("2"),QString("1"),QString("2"),QString("5"),QString("F"));
    tasks *task3=new tasks(&w,QString("3"),QString("2"),QString("2"),QString("1"),QString("5"),QString("F"));

//    tasks *task =new tasks(&w,QString("1"),2,3,0,QString("5"),0);
//    tasks *task1=new tasks(&w,QString("2"),2,3,0,QString("5"),0);
//    tasks *task2=new tasks(&w,QString("4"),2,3,0,QString("5"),0);
//    tasks *task3=new tasks(&w,QString("3"),2,3,0,QString("5"),0);


    //qDebug()<<task.get_info();
    //qDebug()<<task.get_name();
    vec.append(task);
    vec.append(task1);
    vec.append(task2);
    vec.append(task3);
    qDebug()<<vec.at(0)->get_info();

//        Queue *q=new Queue();
//        q->addTask(task);
//        q->addTask(task1);
//        q->addTask(task2);
//        q->addTask(task3);
//     task3->set_priority(4);
//     q->refresh();
//     qDebug()<<q->topByPriority()->get_info();
//    //    if(q->top()!=nullptr)
//    //        qDebug()<<q->top()->get_info();
        QVector<tasks*>::const_iterator it;
        for(it=vec.begin();it!=vec.end();it++)
        {
             qDebug()<<(*it)->get_info();
             //qDebug()<<(*it)->get_name();
             (*it)->deleteLater();
        }




    return a.exec();
}
