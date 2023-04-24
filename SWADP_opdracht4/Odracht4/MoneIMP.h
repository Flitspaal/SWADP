#ifndef __MoneIMP__H
#define __MoneIMP__H

#include "MoneINT.h" 


class TsensorINT;

class MoneIMP : public MoneINT {
public:
	MoneIMP();
	MoneIMP(TsensorINT* t);	
	virtual TsensorINT* tsensor();
	virtual void start();
	virtual void stop();
private:
	TsensorINT* S;
};

#endif //__MoneIMP__H