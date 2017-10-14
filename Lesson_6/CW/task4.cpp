#include "stdafx.h"
#include "math.h"
#define N 2
#define M 3
int main()
{
	int matrix[N][M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = sinf(i)*j;
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("\n");
			for (int j = 0; j < M; j++)
		{
			printf("[ %d ]", matrix[i][j]);
		}
	}
	
	float imax = 0;
	float jmax = 0;
	printf("\n \n");
	imax = matrix[0][0];
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
			if (imax < matrix[i][j])
			{
				imax = matrix[i][j];
			}

		printf("\t Max number in %d line = %3.f\n", i, imax);
	}
	printf("\n \n");
	jmax = matrix[0][0];
	for (int j = 0; j < M; j++)
	{

		for (int i = 0; i < N; i++)
			if (jmax < matrix[i][j])
			{
				jmax = matrix[i][j];
			}

		printf("\t Max number in %d column = %3.f \n", j, jmax);
	}

		return 0;
}
