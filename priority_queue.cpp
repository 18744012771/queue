#include "priority_queue.h"
#include "tasks.h"
#include <QDebug>
Priority_Queue ::Priority_Queue(QObject *parent) : QObject(parent)
{
   //queue=new QQueue<tasks*>();
   hash=new QHash<QString,tasks*>();
   undo_queue= new std::priority_queue<tasks*,std::vector<tasks*>,cmp>();
   //doing_queue= new QQueue<tasks*>();
   //done_queue = new QQueue<tasks*>();
   qDebug()<<"init";
   getSize();
}

//析构函数统一释放内存
Priority_Queue ::~Priority_Queue(){
     //QHash<QString,tasks*>::const_iterator it;
    for(auto it=hash->begin();it!=hash->end();it++)
        (*it)->deleteLater();
    hash->clear();
//不允许再次释放已释放的空间
    while(!undo_queue->empty())
    {
        //delete queue->top();
        undo_queue->pop();
    }
    //doing_queue->clear();
    //done_queue->clear();
    delete hash;
    delete undo_queue;
    qDebug()<<"~Queue";
    //getSize();



}
//添加任务
void Priority_Queue ::addTask(tasks *task){
   // queue->enqueue(task);

    if(task==nullptr||hash->find(task->get_name())!=hash->end())
    {
        qDebug()<<"has same task";
        return;
    }
    qDebug()<<"add task"<<task->get_name();
    hash->insert(task->get_name(),task);
    undo_queue->push(task);
}



tasks* Priority_Queue ::findByName( QString name){

     qDebug()<<"find_name";
     tasks *task=nullptr;
     if(hash->find(name)!=hash->end())
         task=hash->find(name).value();
     return task;

}


bool Priority_Queue ::isEmpty(){
    return undo_queue->empty();
}

void Priority_Queue ::deleteAll(){

    while(!undo_queue->empty())
    {
        qDebug()<<undo_queue->top()->get_info();
        undo_queue->pop();
    }
    for(auto it=hash->begin();it!=hash->end();it++){
        (*it)->deleteLater();
    }

    hash->clear();
    qDebug()<<"delete all hash"<<hash->size();


    qDebug()<<"delete all queue" ;
    getSize();

}

//按照任务名删除任务，将hash表和queue中任务删除，同时将任务内存释放
void Priority_Queue ::deleteOne(QString name){
    tasks* task = findByName(name);

    if(task==nullptr)
        return;

    qDebug()<<"before";
    getSize();

    //把hash表中数据释放
    hash->remove(name);
    auto *queue_copy=new std::priority_queue<tasks*,std::vector<tasks*>,cmp>() ;


    while(!undo_queue->empty())
    {
        tasks* head=undo_queue->top();
        undo_queue->pop();
        if(head!=task)
            queue_copy->push(head);
    }
    undo_queue=queue_copy;
    qDebug()<<"after" ;
    getSize();
    //单独释放task,因为hash.remove掉了
    task->deleteLater();

}



//返回队列头元素
tasks* Priority_Queue ::top(){
    tasks* task=nullptr;
    if(undo_queue->size()>0){
        task=undo_queue->top();
        //queue->pop();

    }

     return task;
}

//pop时同时将hash表中任务释放
//实际工作时不能立即释放，应该是扔到任务进行队列
void Priority_Queue ::pop(){
    tasks* task =undo_queue->top();
    QString name=task->get_name();
    hash->remove(name);
    undo_queue->pop();
    //task->deleteLater();
    qDebug()<<"pop";
    getSize();
}

//设置优先级后重新刷新
void Priority_Queue ::refresh(){

    if(undo_queue->size()<=0)
        return;
    auto *queue_copy=new std::priority_queue<tasks*,std::vector<tasks*>,cmp>() ;
    while(!undo_queue->empty())
    {
        tasks *task=undo_queue->top();
        qDebug()<<task->get_info();
        queue_copy->push(task);
        qDebug()<<"---";
        undo_queue->pop();
        getSize();

    }

    undo_queue=queue_copy;
    qDebug()<<"refresh";
    getSize();

    //for(auto it=undo_queue->)
}


void Priority_Queue ::getSize(){

    qDebug()<<"hash:"<<hash->size()<<"queue:"<<undo_queue->size();
}
