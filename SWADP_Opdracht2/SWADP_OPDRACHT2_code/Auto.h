#ifndef __Auto_H
#define __Auto_H

#include "Snelheid.h"

class Auto
{
public:
	Auto(Snelheid*);
	void meetSnelheid();

private:
	Snelheid *S;
};

#endif