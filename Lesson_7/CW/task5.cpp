#include "stdafx.h"
#include <stdlib.h>
int main()
{
	int *р;
	р = (int *)malloc(40 * sizeof(int));
	free(р);
	return 0;
}
