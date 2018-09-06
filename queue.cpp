#include "queue.h"
#include "tasks.h"
#include <QDebug>
Queue::Queue(QObject *parent) : QObject(parent)
{
   queue=new QQueue<tasks*>();
   hash=new QHash<QString,tasks*>();
   queue1= new std::priority_queue<tasks*,std::vector<tasks*>,cmp>();
}

Queue::~Queue(){
    QQueue<tasks*>::const_iterator it;
    for(it=queue->begin();it!=queue->end();it++){
        (*it)->deleteLater();
    }
    hash->clear();
    delete queue;
    delete hash;
    delete queue1;

    //queue1->delete();
    //queue->delete();
    //hash->delete();

}

void Queue::addTask(tasks *task){
    queue->enqueue(task);
    hash->insert(task->get_name(),task);
    queue1->push(task);
}

tasks* Queue::findByName( QString name){

     qDebug()<<"find_name";
     tasks *task=nullptr;
     if(hash->find(name)!=hash->end())
         task=hash->find(name).value();
     return task;

}



void Queue::deleteAll(){
    QQueue<tasks*>::const_iterator it;
    for(it=queue->begin();it!=queue->end();it++){
        (*it)->deleteLater();
    }
    queue->clear();
    hash->clear();
}

void Queue::deleteOne(QString name){
    tasks* task = findByName(name);
    if(task==nullptr)
        return;
    queue->removeOne(task);
    hash->remove(name);


}

tasks* Queue::top(){
    tasks* task=nullptr;
    if(queue->size()>0)
        task=queue->dequeue();

    //???? hash->remove()
     return task;

}


tasks* Queue::topByPriority(){
    tasks* task=nullptr;
    if(queue1->size()>0){
        task=queue1->top();
        queue1->pop();
    }



    //???? hash->remove()
     return task;

}


//设置优先级后重新刷新
void Queue::refresh(){

    if(queue1->size()<=0)
        return;
    auto *queue1_copy=new std::priority_queue<tasks*,std::vector<tasks*>,cmp>() ;
    while(!queue1->empty())
    {

        qDebug()<<queue1->top()->get_info();
        queue1_copy->push(queue1->top());
        queue1->pop();

    }

    queue1=queue1_copy;

}
