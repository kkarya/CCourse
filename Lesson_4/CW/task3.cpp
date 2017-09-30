#include "stdafx.h"


int main()
{
	int range = 0;
	printf("Enter range: ");
	scanf_s("%d", &range);
	for (int cons = range; cons >= 0; cons--)
	{
		printf("%d \t", cons);
	}
	return 0;
}
