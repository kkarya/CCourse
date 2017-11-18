#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	char *my_string = NULL;
	int string_len = 0;
	printf("Enter number \n");
	scanf_s("%d", &string_len);

	my_string = (char *)malloc(sizeof(char)*string_len);

	printf("Enter text \n");
	scanf_s("%s", my_string, string_len);
	
	printf(" \n");

	for (int i = 0; i <string_len; i++)
	{
		if (my_string[i] != '\0')
			printf("%d ", my_string[i]);
		else
			break;
	}
	printf(" \n");
	int counter = 0;
	for (int i = 0; i < string_len; i++)
	{
		if (my_string[i] == 'A')
		{
			counter++;
		}
	}
	printf(" \n");
	printf("Total %d items 'A' ",counter);
	return 0;
}
