#ifndef ROBOT_H
#define ROBOT_H


class Server;



class Robot
{
private:
    Server* p;
   
public:
    Robot(Server*);
    ~Robot();

    void run();
    void show() const;

};

#endif // !ROBOT_H


//Frits Duindam