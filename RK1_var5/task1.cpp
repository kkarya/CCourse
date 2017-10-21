#include "stdafx.h"
#include "math.h"


int main()
{
	float x1, y1, x2, y2, x, y, result = 0;
	printf("Enter x1,y1: ");
	scanf_s("%d, %d", &x1, &y1);
	printf("Enter x2,y2: ");
	scanf_s("%d, %d", &x2, &y2);
	printf("Enter x,y: ");
	scanf_s("%d, %d", &x, &y);

	if (x>x1 && y>y1 && x<x2 && y<y2)
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
