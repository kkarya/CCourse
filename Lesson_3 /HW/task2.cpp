#include "stdafx.h"


int main()
{
	float L1x, L1y, L2x, L2y, C1, C2, Mx, My, k, j = 0;
	printf("Input line 1 (Ax, By, C): ");
	scanf_s("%f, %f, %f", &L1x, &L1y, &C1);
	printf("Input line 2 (Ax, By, C): ");
	scanf_s("%f, %f, %f", &L2x, &L2y, &C2);

	if (L1x * L2y == L1y * L2x)
	{
		printf("Lines do not cross; \n");
		return 0;
	}
	
	/* if ((L1x == 0) && (L1y == 0))
	{
		printf("Line 1 do not exist; \n");
		return 0;
	}

	if ((L2x == 0) && (L2y == 0))
	{
		printf("Line 2 do not exist; \n");
		return 0;
	}*/

	if (L1x != 0)
	{
		// A1x + B1y = C1; 
		// A1x = C1 - B1y
		// x = (C1-B1y) / A1;
		// A2 * ((C1-B1y) \ A1) + B2y = C2 
		
		k = C2 - ((L2x * C1) / (L1x));
		j = (-1) * (((L2x * L1y)) / L1x) + L2y;

		// y = k \ j;

		My = k / j;
		Mx = (C1 - L1y * My) / L1x;
	}
	else
	{
		k = C2 - ((L2y * C1) / (L1y));
		j = L2x - ((L2y * L1x) / L1y);

		// y = k \ j;

		Mx = k / j;
		My = C1 - L1x;
	}

	printf("X = %.1f; Y = %.1f\n", Mx, My);

    return 0;
}
