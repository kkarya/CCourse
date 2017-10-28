#include "stdafx.h"
#include <stdlib.h>
#define N 10
int main()
{
	int vector[N], *рtr_v;
	for (int i = 0; i < N; i++)
		vector[i] = i;
	рtr_v = vector;
	for (int i = 0; i < N; i++)
		printf("%d\n", *(рtr_v + i));
	return 0;
}
