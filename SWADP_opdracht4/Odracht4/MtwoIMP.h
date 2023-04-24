#ifndef __MtwoIMP__H
#define __MtwoIMP__H

#include "MtwoINT.h"

class TsensorINT;

class MtwoIMP : public MtwoINT {
public:
	MtwoIMP();
	MtwoIMP(TsensorINT* t);
	~MtwoIMP();
	virtual TsensorINT* tsensor();
	virtual void start();
	virtual void stop();
private:
	TsensorINT* S;
};

#endif __MtwoIMP__H