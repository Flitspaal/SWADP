#include "Subject.h"

void Subject::insert(Observer* o){
    L.push_front(o);
}

void Subject::remove(Observer* o){
    L.remove(o);
}

void Subject::notify(){
    for (std::list<Observer*>::iterator i = L.begin(); i != L.end(); ++i)
        (*i)->update();
}


