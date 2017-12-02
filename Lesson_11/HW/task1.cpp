#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	FILE *file;
	float value = 0;

	float *row = NULL;
	int size = 1;
	float *brow = NULL;
	int position = 0;
	

	row = (float*)malloc(sizeof(float)*size);

	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Downloads\\Lesson_11\\files\\array1.txt", "r");

	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		while (fscanf_s(file, "%f", &value) != EOF)
		{
			if (position == size)
			{
				size = size * 2;
				brow = (float *)realloc(row, size*sizeof(int));
				for (int i = 0; i < position; i++)
					brow[i] = row[i];
				row = brow;
			}
			row[position] = value;
			position++;

			printf("%0.f\n", value);
		}
	}
	void selectSort(T a[], long size) 
	{
		long i, j, k;
		T x;

		for (i = 0; i < size; i++) 
		{   	// i - номер текущего шага
			k = i; x = a[i];

			for (j = i + 1; j < size; j++)	// цикл выбора наименьшего элемента
				if (a[j] < x) 
				{
					k = j; x = a[j];	        // k - индекс наименьшего элемента
				}

			a[k] = a[i]; a[i] = x;   	// меняем местами наименьший с a[i]
		}
	}
	return 0;
}
