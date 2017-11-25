#include "stdafx.h"
#include <stdlib.h>
int main()
{
	FILE *file;
	char string[100];
	int value = 0;
	int sum = 0;
	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\file.txt", "r");
	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		while (fscanf_s(file, "%100s %d", string, 100, &value) != EOF) 
		{
			printf("%s ", string);
			printf("%d\n", value);
			sum = value + sum;
		}
	}
	printf("Sum = %d ", sum);
	fclose(file);
	return 0;
}
