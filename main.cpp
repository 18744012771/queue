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


    tasks *task =new tasks(&w,QString("a"),QString("2"),QString("0"),QString("0"),QString("5"),QString("F"));
    tasks *task1=new tasks(&w,QString("b"),QString("2"),QString("0"),QString("0"),QString("5"),QString("F"));
    tasks *task2=new tasks(&w,QString("c"),QString("2"),QString("1"),QString("0"),QString("5"),QString("F"));
    tasks *task3=new tasks(&w,QString("d"),QString("2"),QString("2"),QString("0"),QString("5"),QString("F"));

//    tasks *task =new tasks(&w,QString("1"),2,3,0,QString("5"),0);
//    tasks *task1=new tasks(&w,QString("2"),2,3,0,QString("5"),0);
//    tasks *task2=new tasks(&w,QString("4"),2,3,0,QString("5"),0);
//    tasks *task3=new tasks(&w,QString("3"),2,3,0,QString("5"),0);



        Queue *q=new Queue();
        q->addTask(task);
        q->addTask(task1);
        q->addTask(task2);
        q->addTask(task3);
     qDebug()<<"init:"<<q->top()->get_info();

     task3->set_priority(4);
     q->refresh();
     qDebug()<<"task3->set_priority(4):"<<q->top()->get_info();
     q->pop();

     q->deleteOne(QString("c"));
     qDebug()<<q->top()->get_info();

      q->deleteAll();


    // q->deleteAll();

      //qDebug()<<q->top()->get_info();




//    int *p=new int(4);
//    int *p1=p;
//    std::vector<int *> parr;
//    parr.push_back(p);

//    qDebug()<<p;

//    delete p;
//    delete p1;
//    qDebug()<<p;
//    qDebug()<<parr[0];
//    p=nullptr;
//    qDebug()<<p;
//    qDebug()<<parr[0];
//    tasks* task5=new  tasks(&w,QString("4"),QString("2"),QString("2"),QString("0"),QString("5"),QString("F"));
//    qDebug()<<task5<<sizeof(*task5);
//     //task5->deleteLater();
//     delete task5;
//    task5=NULL;
//     qDebug()<<task5<<sizeof(*task5);

//     double *d=new double(4);
//     qDebug()<<d<<sizeof(*d);
//     delete d;
//      qDebug()<<d<<sizeof(*d);

    return a.exec();
}
