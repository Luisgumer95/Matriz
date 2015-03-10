// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"stdlib.h"

int day_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


int _tmain(int argc, _TCHAR* argv[])
{
	int day, month, year;
	
	


	printf("Input the Date(Example 1/11/1990):");
	scanf_s("%d/%d/%d", &day, &month, &year);

	if (day>31 || day<1){
		printf("The day is invalid, input another date\n");

	}

	if (month>12 || month < 1){
		printf("The Month is invalid, input another date\n");

	}

	if (year < 1){
		printf("The Year is invalid, imput another date\n");

	}
	
	if (month = 1)
		day + 1;
	else
		day = 1, month + 1;

	
	
	printf("the next day is:%d/%d/%d", day, month, year);
	system("pause");
	return 0;
}

