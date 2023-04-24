#include "AnalogeMeter.h"
#include <iostream>


using namespace std;

AnalogeMeter::AnalogeMeter(Snelheid* t):Observer(t)
{
}

void AnalogeMeter::update()
{
	cout << "Analoog: " << dynamic_cast<Snelheid*>(getSubject())->geef();
}
