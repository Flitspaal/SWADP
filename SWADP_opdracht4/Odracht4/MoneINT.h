#ifndef __MoneINT_h_
#define __MoneINT_h_

#include "MotorINT.h"
class TsensorIMP;

class MoneINT : public MotorINT {
public:
	MoneINT();
    MoneINT(TsensorIMP*);
    virtual ~MoneINT();
	virtual void start() = 0;
	virtual void stop() = 0;
};



#endif __MoneINT_h_