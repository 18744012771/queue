#include "taskmanager.h"

TaskManager::TaskManager(QObject *parent) : QObject(parent)
{

}
TaskManager::~TaskManager()
{

}


void TaskManager::add_undo(tasks *task){


   if(task==nullptr)
       return;
   undo_queue->addTask(task);
   hash->insert(task->get_name(),task);
}


void TaskManager::assign(){
//?????任务分配 指标？？？
  //目前采用fifo+优先级
   //任务从等待队列取出并设置工作状态为0->1
    tasks *task=undo_queue->top();
    undo_queue->pop();

    task->set_isfinished(1);
    add_doing(task);
}

void TaskManager::re_dotask(tasks * task){

    //需不需要添加下优先级？？
    //task->set_priority(task->get_priority()+1);
    add_undo(task);
}

void TaskManager::add_doing(tasks *task){
    if(task==nullptr)
        return;
    doing_queue->enqueue(task);
}

void TaskManager::add_done(tasks *task){
    if(task==nullptr)
        return;
    done_queue->enqueue(task);
}
