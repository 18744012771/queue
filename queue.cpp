#include "queue.h"
#include "tasks.h"
#include <QDebug>
Queue::Queue(QObject *parent) : QObject(parent)
{
   //queue=new QQueue<tasks*>();
   hash=new QHash<QString,tasks*>();
   queue= new std::priority_queue<tasks*,std::vector<tasks*>,cmp>();
   qDebug()<<"init";
   getSize();
}

//析构函数统一释放内存
Queue::~Queue(){
     //QHash<QString,tasks*>::const_iterator it;
    for(auto it=hash->begin();it!=hash->end();it++)
        (*it)->deleteLater();
    hash->clear();
//不允许再次释放已释放的空间
    while(!queue->empty())
    {
        //delete queue->top();
        queue->pop();
    }
    delete hash;
    delete queue;
    qDebug()<<"~Queue";
    getSize();



}
//添加任务
void Queue::addTask(tasks *task){
   // queue->enqueue(task);
    hash->insert(task->get_name(),task);
    queue->push(task);
}



tasks* Queue::findByName( QString name){

     qDebug()<<"find_name";
     tasks *task=nullptr;
     if(hash->find(name)!=hash->end())
         task=hash->find(name).value();
     return task;

}



void Queue::deleteAll(){

    for(auto it=hash->begin();it!=hash->end();it++){
        (*it)->deleteLater();
    }

    hash->clear();
    qDebug()<<"delete all hash"<<hash->size();
    while(!queue->empty())
    {

        queue->pop();
    }

    qDebug()<<"delete all queue" ;
    getSize();

}

//按照任务名删除任务，将hash表和queue中任务删除，同时将任务内存释放
void Queue::deleteOne(QString name){
    tasks* task = findByName(name);

    if(task==nullptr)
        return;

    qDebug()<<"before";
    getSize();

    //把hash表中数据释放
    hash->remove(name);
    auto *queue_copy=new std::priority_queue<tasks*,std::vector<tasks*>,cmp>() ;


    while(!queue->empty())
    {
        tasks* head=queue->top();
        queue->pop();
        if(head!=task)
            queue_copy->push(head);
    }
    queue=queue_copy;
    qDebug()<<"after" ;
    getSize();
    //单独释放task,因为hash.remove掉了
    task->deleteLater();

}



//返回队列头元素
tasks* Queue::top(){
    tasks* task=nullptr;
    if(queue->size()>0){
        task=queue->top();
        //queue->pop();

    }

     return task;
}

//pop时同时将hash表中任务释放
//实际工作时不能立即释放，应该是扔到任务进行队列
void Queue::pop(){
    tasks* task =queue->top();
    QString name=task->get_name();
    hash->remove(name);
    queue->pop();
    task->deleteLater();
    qDebug()<<"pop";
    getSize();
}

//设置优先级后重新刷新
void Queue::refresh(){

    if(queue->size()<=0)
        return;
    auto *queue_copy=new std::priority_queue<tasks*,std::vector<tasks*>,cmp>() ;
    while(!queue->empty())
    {

        qDebug()<<queue->top()->get_info();
        queue_copy->push(queue->top());
        queue->pop();

    }

    queue=queue_copy;
    qDebug()<<"refresh";
    getSize();
}


void Queue::getSize(){

    qDebug()<<"hash:"<<hash->size()<<"queue:"<<queue->size();
}
