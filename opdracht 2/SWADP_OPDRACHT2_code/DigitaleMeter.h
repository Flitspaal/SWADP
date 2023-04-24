#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H

#include "Observer.h"
#include "Snelheid.h"


class DigitaleMeter: public Observer
{
public:
	DigitaleMeter(Snelheid*);
	virtual void update();

private:
	float waarde;
};

#endif // !__DigitaleMeter_H
