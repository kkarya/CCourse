#include "stdafx.h"
#include <stdlib.h>
#define BUFFER_SIZE 1024
int main()
{
	FILE *file;
	char buffer[BUFFER_SIZE];
	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\file.txt", "r");
	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) 
		{
			printf("%s", buffer);
		}
	}
	fclose(file);
	return 0;
}
