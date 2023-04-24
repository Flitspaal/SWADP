#include "Robot.h"
#include "string.h"
#include "Server.h"

#include "iostream"

using namespace std;

Robot::Robot(Server* p) : p(p) {
}

Robot::~Robot() {
}

void Robot::run() {
    p->Move(10, 5);
}

void Robot::show() const {
    cout << "De coordinaten zijn: X = " << (p->GeefXcoord()) << ", Y = " << (p->GeefYcoord()) << endl;
}

//Frits Duindam