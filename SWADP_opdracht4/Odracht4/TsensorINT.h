#ifndef __TSensor_H
#define __TSensor_H

#include "Subject.h"


class TsensorINT: public Subject {
public:
    TsensorINT();
    virtual ~TsensorINT();
    virtual void read() = 0;
    virtual int temperature() = 0;
};



#endif __TSensor_H
