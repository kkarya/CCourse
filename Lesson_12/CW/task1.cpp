// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct student 
{
	char name[20];
	char surname[30];
	int birthday;
	int id;
};


int main()
{
	FILE *file;
	char buffer[1024];
	struct student best_student;

	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\Lesson_12\\files\\student.txt", "r");

	if (err)
		printf_s("The file file.txt was not opened\n");
	else
	{
		int counter = 1;

		while (fscanf_s(file, "%s", buffer, 1024) != EOF, counter <=4)
		{
			switch (counter)
			{ 
			case 1:

				strcpy_s(best_student.name, buffer);
				printf("Name: %s\n", best_student.name);
				break;

			case 2:
				strcpy_s(best_student.surname, buffer);
				printf("Surname: %s\n", best_student.surname);
				break;

			case 3:
				best_student.birthday = atoi(buffer);
				printf("Birthday: %d\n", best_student.birthday);
				break;

			case 4:
				best_student.id=atoi(buffer);
				printf("ID: %d\n", best_student.id);
				break;

			}
			counter++;
		}
	}
	return 0;
}

