#include "stdafx.h"
#include "math.h"
#include "Header.h"

int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	int a = 0, var_1 = 0;
	int b = 0, var_2 = 0;
	printf("Enter a,b: ");

	scanf_s("%d, %d", &a, &b);

	if (a > b)
	{
		var_1 = a;
		var_2 = b;
	}
	else
	{
		var_2 = a;
		var_1 = b;
	}

	int result = min(var_1, var_2);
    while (var_1%var_2)
	{
		//result = var_1%var_2;
		result = min(var_1, var_2);

		if (var_1 > var_2)
			var_1 = var_1%var_2;
		else
			var_2 = var_1%var_2;		
	}

	printf("NOD:%d \n", result);

	return 0;
}
