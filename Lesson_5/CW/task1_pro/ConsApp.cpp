#include "stdafx.h"
#include "functions.h"
int main()
{
	int value_1, value_2, result = 0;
	scanf_s("%d, %d", &value_1, &value_2);
	result = max(value_1, value_2);

	printf("Max:%d \n", result);
	return 0;
}
