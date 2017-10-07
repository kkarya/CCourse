#include "stdafx.h"
#include "math.h"


int main()
{
	int number, residue, check = 0;
	do
	{
		printf("Input number, that must be positive and bigger than zero. Input zero for leave : ");
		scanf_s("%d", &number);
		if (number == 0)
		{
			printf("Program work done;\n");
			return 0;
		}
		if (number <= 0)
		{
			printf("Invalid number;\n");
			return 0;
		}
		for (int i = 1; i < number; i++)
		{
			residue = number % i;
			printf(" |i = %d -- residue = %d| \n", i, residue);
			if ((residue == 0) && (i != 1))
			{
				check = 1;
				break;
			}
		}
		switch (check)
		{
		case 0:
			printf("%d is prime nubmer;\n", number);
			break;
		case 1:
			printf("%d is not prime number;\n", number);
			break;
		default:
			break;
		}
		check = 0;
	} 
	while (1);
	
	return 0;
}
