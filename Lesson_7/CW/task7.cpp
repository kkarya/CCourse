#include "stdafx.h"
#include <stdlib.h>
#define N 10
int main()
{
	int vector[N], *рtr_v;

	for (int i = 0; i < N; i++)
		vector[i] = i;
	
	рtr_v = vector;
	printf("%d\n", &vector[0]);
	printf("%d\n", vector);
	printf("%d\n", рtr_v);
	return 0;
}
