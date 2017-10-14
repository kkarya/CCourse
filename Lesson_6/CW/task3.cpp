#include "stdafx.h"
#define N 2
#define M 3
int main()
{
	int matrix[N][M];
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = i*j;
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
	
	
		return 0;
}
