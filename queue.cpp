#include "queue.h"
#include "tasks.h"
#include <QDebug>
Queue::Queue(QObject *parent) : QObject(parent)
{
   //queue=new QQueue<tasks*>();
   hash=new QHash<QString,tasks*>();
   queue= new std::priority_queue<tasks*,std::vector<tasks*>,cmp>();
}

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



}

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

    qDebug()<<"delete all queue"<<queue->size();

}

void Queue::deleteOne(QString name){
    tasks* task = findByName(name);

    if(task==nullptr)
        return;

    qDebug()<<"before"<<hash->size();
    qDebug()<<"before"<<queue->size();


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
    qDebug()<<"after"<<hash->size();
    qDebug()<<"after"<<queue->size();
    //单独释放task,因为hash.remove掉了
    task->deleteLater();

}



//队列中pop了，hash表没pop
tasks* Queue::top(){
    tasks* task=nullptr;
    if(queue->size()>0){
        task=queue->top();
        //queue->pop();

    }

     return task;
}


void Queue::pop(){

    queue->pop();
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
}
