#ifndef __MtwoINT_H
#define	__MtwoINT_H

#include "MotorINT.h"

class MtwoINT: public MotorINT
{
public:
	MtwoINT();
	MtwoINT(TsensorINT*);
	~MtwoINT();
	virtual void start() = 0;
	virtual void stop() = 0;

};

#endif __MtwoINT_H
