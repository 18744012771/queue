#ifndef TASKS_H
#define TASKS_H

#include <QObject>
#define SET_GETName(type, name)\
    public:\
    inline void set##name(type v) {\
        name = v;\
    }\
    inline type get##name() {\
        return  name;\
    }
class tasks: public QObject
{

public:
   // explicit tasks( );
    ~tasks();
    tasks(QObject *,QString,int,int,int,QString,int);
    tasks(QObject *,QString,QString,QString,QString,QString,QString);
//    void addtask(tasks );
//    void deletetask(QString);
//    void findtask(QString);
    QString get_info();
    SET_GETName(QString, _name);
    SET_GETName(int, _start);
    SET_GETName(int, _end);
    SET_GETName(int, _priority);
    SET_GETName(QString, _time);
    SET_GETName(int, _isfinished);


private:
    QString _name;
    int _start;
    int _end;
    int _priority;
    QString _time;
    int _isfinished;
   // int s;
};

#endif // TASKS_H
