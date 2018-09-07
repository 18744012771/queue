#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QObject>
#include <QQueue>
#include "priority_queue.h"
#include <QDebug>
#include <QHash>
#include "tasks.h"
//#include <Q>
class TaskManager : public QObject
{
    Q_OBJECT
public:
    explicit TaskManager(QObject *parent = 0);
    ~TaskManager();

    //任务分发
    void assign();
    //任务重做
    void re_dotask(tasks*);
    //添加到未做队列
    void add_undo(tasks*);
    //添加到doing队列
    void add_doing(tasks*);
    //添加到done队列
    void add_done(tasks*);
signals:

public slots:

private:
    QHash<QString,tasks*> *hash;
    Priority_Queue *undo_queue;
    QQueue<tasks*> *doing_queue;
    QQueue<tasks*> *done_queue;

};

#endif // TASKMANAGER_H
