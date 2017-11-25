#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#define BUFFER_SIZE 1024

int main()
{
	FILE *file;
	int value = 0;
	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\file1.txt", "w");
	if (err)
		printf_s("The file file1.txt was not opened\n");
	else
	{
		
    /*
    while(1)
{
scanf_s("%d", &value);
if (value < 0)
break;
fprintf_s(file, "%d\n", value);
}
    */
    
    for (int i = 0; i < 1000; i++)
		{
			value = rand() % 200 - 100;
			fprintf_s(file, "%d\n", value);
		}
	}
	fclose(file);
	return 0;
}

