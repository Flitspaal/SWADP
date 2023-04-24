#include "MoneIMP.h"
#include "TsensorINT.h"
#include "TsensorIMP.h"
#include <iostream>


MoneIMP::MoneIMP()
{
}

MoneIMP::MoneIMP(TsensorINT* t) {
	S = t;
}

TsensorINT* MoneIMP::tsensor()
{
	return S;
}

void MoneIMP::start()
{
	std::cout << "Motor one has started...." << std::endl;
}

void MoneIMP::stop()
{
	std::cout << "Motor two has stopped...." << std::endl;
}
