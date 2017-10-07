#include "stdafx.h"
#include "math.h"

int deg(int number, int degree)
{
	int result = number;
	for (int i = 1; i < degree; i++)
	{
		result = result * number;
	}
	return result;
}


int factorial(int fact)
{

	int result = 1;

	for (int i = 1; i <= fact; i++)
	{
		result = result * i;
	}
	return result;
}

int pos(int check_value)
{
	if (check_value > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int value_1, value_2, answer = 0;
	printf("Input value 1, value 2: ");
	scanf_s("%d, %d", &value_1, &value_2);
	
	answer = deg(value_1, value_2);
	printf("Degree = %d; \n", answer);

	answer = factorial(value_1);
	printf("Factorial = %d; \n", answer);

	answer = pos(value_1);
	switch (answer)
	{
	case 1:
		printf("%d - positive; \n", answer);
		break;
	case 0:
		printf("%d - isn't positive; \n", answer);
		break;
	}

	return 0;
}
