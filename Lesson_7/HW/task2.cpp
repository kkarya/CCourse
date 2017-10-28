// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	int sum = 0;
	int umn = 1;
	int *adr = NULL;
	int i = 0;
	int value = 0;
	printf("Enter #massiv: ");
	scanf_s("%d", &vector_size);
	
	ptr_v = (int *)malloc(vector_size * sizeof(int));
	
	while (i<vector_size)
	{
		scanf_s("%d", &value);
		if ((value >= 0) && (value < 10))
		{
			ptr_v[i] = value;
			printf("OK \n");
			i++;
		}
		else
		{
			printf("Error! \n");
		}
	}
	for (int i = 0; i < vector_size; i++)
		{
			printf("\n %d \n", *(ptr_v + i));
		}
	
	for (int i = 0; i < vector_size; i++)
	{

	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	/**int max = *(ptr_v);
	for (int i = 0; i < vector_size; i++)
	{
		sum = sum + *(ptr_v + i);
		umn = umn * *(ptr_v + i);
		if (max < ptr_v[i])
		{
			max = ptr_v[i];
			adr = &ptr_v[i];
		}
	}
	printf("Sum= %d \n", sum);
	printf("Umn= %d \n", umn);
	printf("Max= %d \n", max);
	printf("Adr= %d \n", adr);
	**/
	free(ptr_v);
	return 0;
}
