#include "stdafx.h"
#include "math.h"

int main()
{
	int range = 0;
	printf("Enter range: \n");
	scanf_s("%d", &range);
	if (0 <= range && range <= 100)
	{
		printf("yes");
		return 0;
	}
	else
	{
		printf("no");
	}
	return 0;
}
