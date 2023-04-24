#include "MtwoIMP.h"
#include "TsensorINT.h"
#include <iostream>

MtwoIMP::MtwoIMP()
{
}

MtwoIMP::MtwoIMP(TsensorINT* t){
	S = t;
}

MtwoIMP::~MtwoIMP()
{
}

TsensorINT* MtwoIMP::tsensor()
{
	return S;
}

void MtwoIMP::start()
{
	std::cout <<"Motor two has started...."<< std::endl;
}

void MtwoIMP::stop()
{
	std::cout <<"Motor two has stopped...."<< std::endl;
}
