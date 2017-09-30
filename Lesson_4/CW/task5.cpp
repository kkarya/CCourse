#include "stdafx.h"


int main()
{
	int size = 0;
	printf("Enter size:\n");
	scanf_s("%d", &size);
	for (int i = size; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
