#include "stdafx.h"
#include <stdlib.h>
int main()
{
	int *vector = NULL;
	int vector_size = 0;
	scanf_s("%d", &vector_size);
	vector = (int *)calloc(sizeof(int), vector_size);
	for (int i = 0; i < vector_size; i++)
	{
		printf("%d\n", vector[i]);
	}
	return 0;
}
