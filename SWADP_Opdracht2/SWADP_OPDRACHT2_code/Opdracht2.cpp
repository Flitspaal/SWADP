#include "Snelheid.h"
#include "AnalogeMeter.h"
#include "Auto.h"
#include "DigitaleMeter.h"

#include <iostream>

int main()
{
	Snelheid S;
	DigitaleMeter DM(&S);
	AnalogeMeter AM(&S);
	Auto A(&S);
	A.meetSnelheid();
	return 0;
}