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

namespace hrzn {
  class priority_Queue;

}
class Priority_Queue : public QObject
{
    Q_OBJECT
public:
    explicit Queue(QObject *parent = 0);
    ~Queue();
    //添加任务
     void addTask(tasks *task);
    //删除所有任务
    void deleteAll();

    //根据任务名删除特定任务  很恶心
    void deleteOne(QString name);
    //根据任务名查找任务
    tasks* findByName( QString name);

    //任务队列是否空
    bool isEmpty();
    //tasks* top();
    //根据优先级返回任务
    tasks* top();
    //更改优先级后需要重新刷新队列
    void refresh();
    //踢出头任务，在这需不需要释放task*，需要修改？
    void pop();



    void getSize();
signals:

public slots:

private:
    //QQueue<tasks*> *queue;
    QHash<QString,tasks*> *hash;
    std::priority_queue<tasks*,std::vector<tasks*>,cmp> *undo_queue;
//    QQueue<tasks*> *doing_queue;
//    QQueue<tasks*> *done_queue;

    //queue<T,vector<T>,cmp>
};

#endif // QUEUE_H
