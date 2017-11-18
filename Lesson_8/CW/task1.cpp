#include "stdafx.h"
#include <stdlib.h>
#define N 10

void print_array(int array[N])
{
	for (int i = 0; i < N; i++)
		printf("%d\n", array[i]);
}

int main()
{
	int vector[N];
	for (int i = 0; i < N; i++)
		vector[i] = i;
	print_array(vector);
	return 0;
}
