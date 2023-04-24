#ifndef __MotorINT_H
#define __MotorINT_H

#include "TsensorINT.h"
 
class MotorINT {
public:
    virtual ~MotorINT();
    virtual TsensorINT* tsensor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};


#endif __MotorINT_H