#ifndef __MachineINT_H
#define __MachineINT_H


#include "MotorINT.h"
  
class MachineINT {
    public:
        virtual MotorINT* motor1() = 0;
        virtual MotorINT* motor2() = 0;
        virtual void run() = 0;
        virtual void halt() = 0;
};

#endif __MachineINT_H