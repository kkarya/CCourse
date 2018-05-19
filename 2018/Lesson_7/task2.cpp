// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class queue 
{
protected:
	int _q[100];
	int _sloc, _rloc;
	int _queue_id;
public:
	queue(int); // конструктор
	~queue(); // деструктор
	void qput(int i);
	int qget();
};

// конструктор
queue::queue(int id)
{
	_sloc = _rloc = 0;
	_queue_id = id;
	printf("Queue initialized %d.\n",_queue_id);
}

// деструктор
queue ::~queue()
{
	printf("Queue destroyed %d.\n", _queue_id);
}

void queue::qput(int i)
{
	if (_sloc == 99) 
	{
		printf("Queue is full.\n");
			return;
	}
	_sloc++;
	_q[_sloc] = i;
};

int queue::qget()
{
	if (_rloc == _sloc) 
	{
		printf("Queue underflow.\n");
			return 0;
	}
	_rloc++;
	return _q[_rloc];
};
void foo()
{
	queue MyQueue1(1);
	queue MyQueue2(2);
	printf("My action!\n");
}
int main() 
{
	foo();
	printf("My other!\n");
	//queue MyQueue1;
	//queue MyQueue2;
	return 0;
}

