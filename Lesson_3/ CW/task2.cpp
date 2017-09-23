#include "stdafx.h"
#include <math.h>

int main()
{
	float a, b, c, mx, my,d = 0;
	printf("Enter A,B,C ");
	scanf_s("%f,%f,%f", &a, &b, &c);
	printf("Enter Mx,My ");
	scanf_s("%f,%f", &mx, &my);

	if ((a == 0) && (b == 0))
	{
		printf("A and B should not be zero\n");
		return 0;
	}
	else
	{
		d = (fabsf(a*mx + b*my + c)) / sqrtf(a*a + b*b);
		printf("Distance =%.2f\n", d);
	}

	getchar();
	return 0;
}
