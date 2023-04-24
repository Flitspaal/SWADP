// Opdracht4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TsensorIMP.h"
#include "MachineIMP.h"
#include "MoneIMP.h"
#include "MtwoIMP.h"
//#include "MotorINT.h"
#include "Observer.h"
#include "Subject.h"
#include "UI.h"

//#include <iostream>

int main()
{
    /*std::cout << "Booting system...." << std::endl;*/
    TsensorIMP T1;
    TsensorIMP T2;
    MoneIMP M1(&T1);
    MtwoIMP M2(&T2);
    MachineIMP M(&M1, &M2);
    UI UI1(&T1, &M);
    UI UI2(&T2, &M);
    M.run();
    M.halt();
    return 0;
}