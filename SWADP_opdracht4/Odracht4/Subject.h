#ifndef __Subject_H
#define __Subject_H

#include <list>
#include <iostream>
#include "Observer.h"

using namespace std;

class Subject
{
    private:
        list<Observer*> L;
    public:
        virtual ~Subject();
        virtual void insert(Observer*);
        virtual void remove(Observer*);
    protected:
        virtual void notify();
};

#endif __Subject_H
