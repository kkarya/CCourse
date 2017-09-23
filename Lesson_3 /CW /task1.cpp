#include "stdafx.h"

int main()
{
	int selector = 0;
	float S = 0;
	float radius = 0;
	float side = 0;
	float length = 0;
	float width = 0;
	float height = 0;

	printf("Area calculation\n");
	printf("\tEnter 1 for circle\n");
	printf("\tEnter 2 square\n");
	printf("\tEnter 3 for rectangle\n");
	printf("\tEnter 4 trapeze\n");
	scanf_s("%d",&selector);
	
	switch (selector)
	{
	case 1:
		printf("Enter radius:\n");
		scanf_s("%f", &radius);
		S = 3.14*radius;
		break;
	case 2:
		printf("Enter side:\n");
		scanf_s("%f", &side);
		S = side*side;
		break;
	case 3:
		printf("Enter length,width:\n");
		scanf_s("%f,%f", &length, &width);
		S = length*width;
		break;
	case 4:
		printf("Enter length,width,height:\n");
		scanf_s("%f,%f,%f", &length, &width, &height);
		S = (length+width)*height*0.5;
		break;
	default:
		printf("Unexpected symbol!!!\n");
		break;
	}
	printf("Area S=%f\n", S);

	getchar();
	return 0;
}
