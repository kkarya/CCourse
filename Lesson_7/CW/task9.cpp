#include "stdafx.h"
#include <stdlib.h>
int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	scanf_s("%d", &vector_size);
	ptr_v = (int *)malloc(vector_size * sizeof(int));
	for (int i = 0; i < vector_size; i++)
		ptr_v[i] = i;
	for (int i = 0; i < vector_size; i++)
		printf("%d\n", *(ptr_v + i));
	free(ptr_v);
		return 0;
}
