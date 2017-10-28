#include "stdafx.h"
#include <stdlib.h>
int main()
{
	char *р;
	if ((р = (char *)malloc(25)) != NULL)
		printf("Good memory allocation\n");
	else
		printf("Error!\n");
	return 0;
}
