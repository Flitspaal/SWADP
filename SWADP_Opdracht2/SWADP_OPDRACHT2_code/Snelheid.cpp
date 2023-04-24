#include "Snelheid.h"

Snelheid::Snelheid(){
	waarde = 42.2;
}

void Snelheid::meet()
{
	notify();
}

float Snelheid::geef()
{
	return waarde;
}
