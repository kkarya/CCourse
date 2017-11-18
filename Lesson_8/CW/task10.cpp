#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
int main()
{
	char *my_string = NULL;
	int string_len = 0;
	scanf_s("%d", &string_len);
	my_string = (char *)malloc(sizeof(char)*string_len);
	scanf_s("%s", my_string, string_len);
	for (int i = 0; i <string_len; i++)
	{
		if (my_string[i] != '\0')
			printf("%c", my_string[i]);
		else
			break;
	}
	return 0;
}
