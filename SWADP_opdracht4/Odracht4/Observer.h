#ifndef __Observer_H
#define __Observer_H

class Subject;

class Observer
{
    private:
        Subject* S;
    public:
        Observer(Subject*);
        virtual ~Observer();
        virtual void update() = 0;
    protected:
        virtual Subject* getSubject();

};

#endif __Observer_H