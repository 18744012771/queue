#include "tasks.h"
#include <QDebug>



tasks::tasks( QObject* parent,QString name,int start,int end,int priority,QString time ,int isfinished) :
    QObject(parent), _name(name),_start(start),_end(end),_priority(priority),_time(time),_isfinished(isfinished)
{
    qDebug()<<"instance";
    qDebug()<<get_info();
    qDebug()<<get_name();

}
tasks::~tasks(){
    qDebug()<<"delete task"<<_name;
}

tasks::tasks(QObject* parent,QString name,QString start,QString end,QString priority,QString time,QString isfinished):
QObject(parent), _name(name),_time(time){
     _start=start.toInt();
     _end=end.toInt();
     _priority=priority.toInt();
     _isfinished=isfinished.toInt();

}

QString tasks::get_info(){
    return _name+","+QString::number(_start)+","+QString::number(_end)+","\
            +QString::number(_priority)+","+_time+","+ QString::number(_isfinished) ;
}


