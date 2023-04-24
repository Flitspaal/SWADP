#pragma once


class Server
{
private:

public:
	virtual ~Server();

	virtual void Move(int,int) = 0;
	virtual int GeefXcoord() const = 0;
	virtual int GeefYcoord() const = 0;

};

//Frits Duindam