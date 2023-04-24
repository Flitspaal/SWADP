#ifndef __Snelheid_H
#define __Snelheid_H

#include "Observer.h"

class Snelheid: public Subject
{
private:
	float waarde;

public:
	Snelheid();
	void meet();
	float geef();

};

#endif // !__Snelheid_H