#ifndef __TsensorIMP_H
#define __TsensorIMP_H

#include "TsensorINT.h"

class TsensorIMP : public TsensorINT
{
private:
	int temp;
public:
	TsensorIMP();
	~TsensorIMP();
	virtual void read();
	virtual int temperature();
};

#endif