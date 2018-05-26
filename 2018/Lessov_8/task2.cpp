// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void myFunction() {
	static int value;
	printf("%d\n", value);
	value++;
}
int main()
{
	for (int i = 0; i < 25; i++)
		myFunction();
	return 0;
}
