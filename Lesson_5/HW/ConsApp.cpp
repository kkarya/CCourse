// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


printf("Select 1 for sum number, Select 2 for natual number, Select 3 for debug number, Select 4 for factorial, Select 5 for fibonachi: ");
scanf_s("%d", &selector);

switch (selector)
//task1 сумма всех чисел
case 1:
int main()
{
	int min, max, k = 0;
	printf("Enter min,max: \n");
	scanf_s("%d,%d", &min, &max);
	if (min > max)
	{
		printf("Incorrect! min > max");
		return 0;
	}
	for (int i = min; i <= max; i++)
	{
		k = k + i;
	}
	printf("Sum:%d; \n", k);
	break;
}
//task2 простое число или нет
case 2:
int main()
{
	int number, residue = 0;
	printf("Input number, that must be positive and bigger than zero: ");
	scanf_s("%d", &number);
	if (number <= 0)
	{
		printf("Invalid number;\n");
		return 0;
	}
	for (int i = 1; i <= number; i++)
	{
		residue = number % i;
		printf(" |i = %d -- residue = %d| ", i, residue);
		if ((residue == 0) && (i != 1) && (i != number))
		{
			printf("%d is not prime number;\n", number);
			return 0;
		}
	}
	printf("%d is prime nubmer;\n", number);
	break;
}
//task3 возведение в степень
case 3:
int main()
{
	int number, degree = 0;
	printf("Input number, degree: ");
	scanf_s("%d,%d", &number, &degree);
	int result = number;
	for (int i = 1; i < degree; i++)
	{
		result = result * number;
	}
	printf("Result = %d; \n", result);
	break;
}
//task4 факториал
case 4:
int main()
{
	int fact = 0;
	int result = 1;
	printf("Input factorial number: ");
	scanf_s("%d", &fact);
	for (int i = 1; i <= fact; i++)
	{
		result = result * i;
	}
	printf("Result = %d; \n", result);


	break;
}
//task5 фибоначчи
case 5:
int main()
{
	int fib, x1, x2, x3 = 0;
	printf("Input fibonachi number: ");
	scanf_s("%d", &fib);
	x1 = 0;
	x2 = 1;
	for (int i = 1; i <= fib; i++)
	{
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
	}
	printf("Result = %d; \n", x1);


	break;
}
