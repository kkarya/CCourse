#include "stdafx.h"

class queue {
	int _q[100];
	int _sloc, _rloc;
public:
	queue(); // конструктор
	~queue(); // деструктор
	void qput(int i);
	int qget();
};

// конструктор
queue::queue()
{
	_sloc = _rloc = 0;
	printf("Queue initialized.\n");
}

// деструктор
queue ::~queue()
{
	printf("Queue destroyed.\n");
}

void queue::qput(int i)
{
	if (_sloc == 99) {
		printf("Queue is full.\n");
			return;
	}
	_sloc++;
	_q[_sloc] = i;
};

int queue::qget()
{
	if (_rloc == _sloc) {
		printf("Queue underflow.\n");
			return 0;
	}
	_rloc++;
	return _q[_rloc];
};

int main() {
	queue MyQueue1;
	queue MyQueue2;
	return 0;
}
