#include "stdafx.h"
#include "math.h"


int main()
{
	int number, residue = 0;

	do
	{
		printf("Input number, that must be positive and bigger than zero: ");
		scanf_s("%d", &number);
		if (number == 0)
		{
			printf("Programm end ;\n");
			return 0;
		}
		if (number <= 0)
		{
			printf("Invalid number;\n");
			return 0;
		}
		for (int i = 1; i <= number; i++)
		{
			residue = number % i;
			printf(" |i = %d -- residue = %d| \n", i, residue);
			if ((residue == 0) && (i != 1) && (i != number))
			{
				printf("%d is not prime number; \n", number);
				return 0;
			}
		}
		printf("%d is prime nubmer; \n", number);
	} 
	while (1);
	
	return 0;
}
