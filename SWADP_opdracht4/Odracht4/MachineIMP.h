#ifndef __MachineImpl_H
#define __MachineImpl_H

#include "MachineINT.h" 

class MotorINT;

class MachineIMP: public MachineINT
{
public:
    MachineIMP(MotorINT* M1, MotorINT* M2);
    virtual MotorINT* motor1();
    virtual MotorINT* motor2();
    virtual void run();
    void halt();
private:
    MotorINT* m1;
    MotorINT* m2;
};

#endif __MachineImpl_H