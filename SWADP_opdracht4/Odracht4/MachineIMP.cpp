#include "MachineIMP.h"
#include "MotorINT.h"
#include "TsensorINT.h"



MachineIMP::MachineIMP(MotorINT* M1, MotorINT* M2):m1(M1),m2(M2)
{

}

MotorINT* MachineIMP::motor1()
{
	return m1;
}

MotorINT* MachineIMP::motor2()
{
	return m2;
}

void MachineIMP::run()
{
	m1->start();  // start motor 1
	m1->tsensor()->read(); // lees temp waarde uit

	m2->start();  // start motor 2
	m2->tsensor()->read();  // leest temp waarde uit
}

void MachineIMP::halt()
{
	m1->stop();
	m1->stop();
}
