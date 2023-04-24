#include "Auto.h"

Auto::Auto(Snelheid*s): S(s)
{
    S = s;
}

void Auto::meetSnelheid()
{
	S->meet();
}
