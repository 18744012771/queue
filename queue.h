#ifndef QUEUE_H
#define QUEUE_H
#include<QQueue>
#include"tasks.h"
#include <QObject>
#include <QHash>
#include<queue>

struct cmp{
    bool operator ()(tasks* a, tasks* b){
        return a->get_priority() < b->get_priority();//最大值优先
    }
};


class Queue : public QObject
{
    Q_OBJECT
public:
    explicit Queue(QObject *parent = 0);
     void addTask(tasks *task);

    void deleteAll();
    void deleteOne(QString name);
    tasks* findByName( QString name);
    ~Queue();

    //bool isEmpty
    tasks* top();
    tasks* topByPriority();

    void refresh();


signals:

public slots:

private:
    QQueue<tasks*> *queue;
    QHash<QString,tasks*> *hash;
    std::priority_queue<tasks*,std::vector<tasks*>,cmp> *queue1;
};

#endif // QUEUE_H
