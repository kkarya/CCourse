#include "stdafx.h"
#include <stdlib.h>

int sum_array(int array[], int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b ; i++)
		sum = sum + array[i];
	return sum;
}

int main()
{
	int *mas = NULL;
	int size = 0;
	printf("Enter # massiv: ");
	scanf_s("%d", &size);
	

	mas = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		mas[i] = i;
		printf("%d \n", mas[i]);
	}
	
	printf("Enter the % range of numbers: index from % to %, input array[a,b]: ", (size), (size-size), (size-1));
	int a = 0;
	int b = 0;
	scanf_s("%d,%d",&a,&b);

	if ((a<0) || (a>=size) || (b<a) || (b>=size))
	{
		printf("Error! \n");
		return 0;
	}

	printf(" \n");
	printf("Array sum = %d; \n", sum_array(mas, a, b));

	free(mas);
	return 0;
}


