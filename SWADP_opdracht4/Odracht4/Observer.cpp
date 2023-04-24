#include "Observer.h"
#include "Subject.h"

Observer::Observer(Subject *s):S(s){
    getSubject()->insert(this);
}

Observer::~Observer(){
    getSubject()->remove(this);
}

void Observer::update()
{
    //dynamic_cast<Observer*>(getSubject())->draw();
}

Subject* Observer::getSubject()
{
    return S;
}
