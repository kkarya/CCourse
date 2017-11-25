#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

int main()
{
	FILE *file;

	char string[BUFFER_SIZE];
	char *result = NULL;
	int string_len = 0;
	int strlenmax = 0;

	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\files\\task2.txt", "r");
	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		while (fgets(string, BUFFER_SIZE, file) != NULL) 
		{
			string_len = strlen(string);
			printf("%d\n", string_len);
			if (strlenmax < string_len)
			{
				strlenmax = string_len;
			}

		}
	}
	printf("%d \n", strlenmax);

	fclose(file);
	return 0;
}
