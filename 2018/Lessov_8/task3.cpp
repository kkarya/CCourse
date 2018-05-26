#include "stdafx.h"
#include <stdlib.h>

class Vehicle {
public:
	virtual void move() = 0;
};

class car : public Vehicle {
public:
	void move() {
		printf("Drive\n");
	}
};

class ship : public Vehicle {
public:
	void move() {
		printf("Swim\n");
	}
};

class aircraft : public Vehicle {
public:
	void move() {
		printf("Fly\n");
	}
};

class Creator {
public:
	virtual Vehicle* factoryMethod() = 0;
};

class carCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new car(); }
};

class shipCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new ship(); }
};

class aircraftCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new aircraft(); }
};

int main()
{

	int flag = 1;
	Vehicle*myVehicle = NULL;
	switch (flag)
{
	case 1:
	{
		carCreator creator;
		myVehicle = creator.factoryMethod();
		break;
	}
	case 2:
	{
		shipCreator creator;
		myVehicle = creator.factoryMethod();
		break;
	}
	case 3:
	{
		aircraftCreator creator;
		myVehicle = creator.factoryMethod();
		break;
	}

	default:
		break;
}
	myVehicle->move();
	delete myVehicle;

	return 0;
}

