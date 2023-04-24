#ifndef __UI_H
#define __UI_H

#include "Observer.h"
class MachineINT;

class UI: public Observer
{
private:
	MachineINT* M;
public:
	UI();
	UI(Subject* S, MachineINT* m);
	~UI();
	virtual void run();
	virtual void halt();
	virtual void update();
};

#endif