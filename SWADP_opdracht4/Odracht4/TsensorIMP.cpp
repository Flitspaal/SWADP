#include "TsensorIMP.h"
#include <iostream>



TsensorIMP::TsensorIMP()
{
	temp = 46;
}

void TsensorIMP::read()
{
	std::cout << "The average temp is: 46 degrees" << std::endl;
}

int TsensorIMP::temperature()
{
	return temp;
}
