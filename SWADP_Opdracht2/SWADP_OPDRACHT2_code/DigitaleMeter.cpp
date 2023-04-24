#include "DigitaleMeter.h"
#include <iostream>

using namespace std;

DigitaleMeter::DigitaleMeter(Snelheid* t): Observer(t)
{
}

void DigitaleMeter::update()
{
	cout <<  "Digitaal:  " << dynamic_cast<Snelheid*>(getSubject())->geef();
}
