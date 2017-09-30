#include "stdafx.h"
#include "math.h"

int main()
{
	float a, b, c, d, x1, x2 = 0;
	printf("Enter A, B, C: ");
	scanf_s("%f, %f, %f", &a, &b, &c);
	if (a == 0)
	{
		printf("A should not be zero\n");
		return 0;
	}
	d = b*b - 4 * a * c;
	printf("D = %f;\n", d);
	if (d < 0)
	{
		printf("D < 0, no roots\n");
		return 0;
	}

	x1 = ((-1) * b + sqrtf(d)) / (2 * a);
	x2 = ((-1) * b - sqrtf(d)) / (2 * a);

	printf("X1 = %.1f; X2 = %.1f;\n", x1, x2);

    return 0;
}
