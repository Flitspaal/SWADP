#include "UI.h"
#include "MachineINT.h"
#include "TsensorIMP.h"
#include <iostream>


UI::UI(Subject* S, MachineINT* m) :Observer(S) {
	M = m;
}

UI::~UI()
{
}

void UI::run()
{
	M->run();
}

void UI::halt()
{
	M->halt();
}


void UI::update() {
	TsensorIMP* s = dynamic_cast<TsensorIMP*>(getSubject());
}