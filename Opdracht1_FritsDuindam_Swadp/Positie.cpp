#include "Positie.h"


Positie::Positie(int Xcoord, int Ycoord) : x(Xcoord), y(Ycoord) {

}

Positie::~Positie() {
}

void Positie::Move(int Xcoord, int Ycoord) {
    x = Xcoord;
    y = Ycoord;
}

int Positie::GeefXcoord() const {
    return x;
}

int Positie::GeefYcoord() const {
    return y;
}

//Frits Duindam