// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Worker {
public:
	// Создаём виртуальную функцию
	virtual int process(int *, int) = 0;
};
class MinFinder : public Worker {
	int process(int *data, int size) {
		int result = 1000;
		for (int i = 0; i < size; i++) {
			if (data[i] < result)
				result = data[i];
		}
		return result;
	}
};
class MaxFinder : public Worker {
	int process(int *data, int size) {
		int result = -1000;
		for (int i = 0; i < size; i++) {
			if (data[i] > result)
				result = data[i];
		}
		return result;
	}
};
int main()
{
	Worker *myWorker; // Указатель на базовый класс!!!
	myWorker = new MaxFinder();
	//myWorker = new MinFinder();
	int data[5] = { 1,7,3,8,2 };
	// Полиморфное поведение
	printf("Result: %d\n", myWorker->process(data, 5));
	return 0;
}
