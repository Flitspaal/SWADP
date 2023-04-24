#ifndef __AnalogeMeter_H
#define __AnalogeMeter_H

#include "Observer.h"
#include "Snelheid.h"


class AnalogeMeter: public Observer
{
public:
	AnalogeMeter(Snelheid*);
	virtual void update();
private:
	float waarde;
};

#endif // !__AnalogeMeter_H