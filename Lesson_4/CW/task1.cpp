#include "stdafx.h"
#include "math.h"


int main()
{
	int m, y, selector, md, yd, im, iy, k = 0;
	printf("Enter birth date Month, Year: ");
	scanf_s("%d, %d", &m, &y);
	printf("Enter check date Month, Year: ");
	scanf_s("%d, %d", &im, &iy);
	if ((m <= 0) && (m > 12))
	{
		printf("Incorrect birth month! \n");
		return 0;
	}
	if (y <= 0)
	{
		printf("Incorrect birth year! \n");
		return 0;
	}

	if ((im <= 0) && (im > 12))
	{
		printf("Incorrect check month! \n");
		return 0;
	}
	if (iy <= 0)
	{
		printf("Incorrect check year! \n");
		return 0;
	}

	printf("Select 1 for detail information or 0 for short: ");
	scanf_s("%d", &selector);

	if (im < m)
	{
		k = m - im;
	}

	switch (selector)
	{
	case 1:
		if (im > m)
		{
			md = im - m;
			yd = iy - y;
		}
		else
		{
			md = 12 - k;
			yd = iy - y - 1;
		}
		printf("%d months, %d years; \n", md, yd);
		break;
	case 0:
		md = im - m;
		printf("%d months; \n", md);
		break;
	default:
		printf("Select only 1 or 0! \n");
		break;
	}
	return 0;
}
