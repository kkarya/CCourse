#include "stdafx.h"


int main()
{
	int min, max, k = 0;
	printf("Enter min,max: \n");
	scanf_s("%d,%d", &min, &max);
	if (min > max)
	{
		printf("Incorrect! min > max");
		return 0;
	}
	for (int i = min; i <= max; i++)
	{
			k = k + i;
	}
	printf("Sum:%d; \n", k);
	return 0;
}
