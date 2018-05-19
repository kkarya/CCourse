// Lesson_7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>

class queue 
{
protected:
//	int _q[100];
	int *_q;
	int _queue_size;
	int _sloc;
public:
	queue(); // конструктор
	~queue(); // деструктор
	void print();
	void push(int i);
	int count();
	int get(int);
	int pop();
};

// конструктор
queue::queue()
{
	_queue_size = 100;
	_q = (int *)malloc(sizeof(int)*_queue_size);
	_sloc = 0;
	printf("Queue initialized.\n");
}

// деструктор
queue ::~queue()
{
	free(_q);
	printf("Queue destroyed.\n");
}

// Добавление элемента в конец очереди
void queue::push(int i)
{
	if (_sloc == 99) {
		printf("Queue is full.\n");
		return;
	}
	_q[_sloc] = i;
	_sloc++;
}
//Реализовать функцию вывода элементов очереди/стека в консоль
void queue::print()
{
	for (int i = 0; i < _sloc; i++)
	{
		printf("Queue: %d\n",_q[i]);
	}

}
//Реализовать функцию поиска длины очереди/стека
int queue::count()
{
	return _sloc;
}
//Реализовать функцию получения элемента по индексу
int queue::get(int id)
{
	return _q[id];
}



// Удаление элемента из начала очереди
int queue::pop() {
	if (_sloc == 0) {
		printf("Queue underflow.\n");
		return 0;
	}
	int value = _q[0];

	for (int i = 0; i < _sloc; i++) {
		_q[i] = _q[i + 1];
	}
	_sloc--;
	return value;
}

class stack : public queue
{
public:
	int pop();
};

int stack::pop() {
	if (_sloc == 0) {
		printf("stack underflow.\n");
		return 0;
	}
	return _q[--_sloc];
}


int main()
{
	queue MyQueue;
	//stack MyQueue;

	MyQueue.push(1);
	MyQueue.push(2);
	MyQueue.push(3);
	MyQueue.push(4);

	MyQueue.print();

	//MyQueue.count();
	printf("ALL_Queue: %d\n", MyQueue.count());
	printf("GET_Queue: %d\n", MyQueue.get(1));

/*
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());

	return 0;
*/
}

