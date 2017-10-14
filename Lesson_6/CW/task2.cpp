#include "stdafx.h"
#define N 10
int main()
{
	int i = 0;
	int vector[N]; // при создании массивов таким способ число элементов должно быть постоянным, т.е. константным
	for (i = 0; i < N; i++)
	{
		vector[i] = i;
	}
	for (i = 0; i < N; i++)
		printf("%d\n", vector[i]);

	int max = 0;
	for (i = 0; i < N; i++)
	{
		if (max < vector[i])
			max = vector[i];
	}
	printf("Max = %d \n :", max);
}
