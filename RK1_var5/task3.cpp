
#include "stdafx.h"
#include "math.h"
#define N 3
#define M 3
int main()
{
	int matrix[N][M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("Matrix 3x3 => Enter 9 element: ");
			scanf_s("%d", &matrix[i][j]);
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

	int a = 0, b = 0, c = 0;

	for (int i = 0; i < 3; i++)
	{
		a = a + matrix[i][1];
		b = b + matrix[i][2];
		c = c + matrix[i][3];
	}
	
	if (a > c)
	{
		if (a > b)
		{
			printf("\n");
			printf("Max sum:%d \n", a);
		}
		else
		{
			printf("\n");
			printf("Max sum:%d \n",b );
		}
	}
	else
	{
		if (c > b)
		{
			printf("\n");
			printf("Max sum:%d \n", c);
		}
		else
		{
			printf("\n");
			printf("Max sum:%d \n", b);
		}
	}

	return 0;
}
