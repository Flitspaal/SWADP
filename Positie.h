#ifndef POSITIE_H
#define POSITIE_H

#include "Server.h"

class Positie : public Server{

private:
    int x; // x coord
    int y; // y coord

public:

    Positie(int, int);
    ~Positie();

     virtual void Move(int, int); // moves the position of the robot
     virtual int GeefXcoord() const; // returns x
     virtual int GeefYcoord() const; // returns y

};

//Frits Duindam

#endif // !POSITIE_H