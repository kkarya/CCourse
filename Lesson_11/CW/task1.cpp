#include "stdafx.h"
#include <stdlib.h>
#define BUFFER_SIZE 1024
#define MATRIX_SIZE 5
int main()
{
	FILE *file;
	char buffer[BUFFER_SIZE];
	int N = 0;

	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Downloads\\Lesson_11\\files\\matrix_4.txt", "r");
	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) 
		{
			printf("%s", buffer);
			break;
		}

		// из buffer находим N
		for (int i = 0; buffer[i] != '\0'; i++)
		{
			printf("%c = %d\n", buffer[i], buffer[i]);
			if (buffer[i] == ' ') 
			{
				N++;
			}
		}
	}

	printf("Kol-vo probelov: %d\n", N);
	
	
	
	float **matrix2d;
	matrix2d = (float **)malloc(N * sizeof(float*));

	for (int i = 0; i < N; i++)
		matrix2d[i] = (float *)malloc(N * sizeof(float));
	
	/*
	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) 
		{
			printf("%s", buffer);
		}

		// из buffer заполняем matrix2d[i]
	}

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
			printf("%f\t", matrix2d[i][j]);
		printf("\n");
	}

	fclose(file);

	*/
	return 0;
}
