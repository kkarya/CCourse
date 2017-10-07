#include "stdafx.h"
#include "functions.h"
void print_numbers(int N)
{
	for (int i = 0; i < N; i++)
		printf("%d \n", i);
}
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
