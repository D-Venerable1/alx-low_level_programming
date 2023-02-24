#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int month = 2;
	int day = 29;
	int year = 2000;

	day = convert_day(month, day);
	print_remaining_days(month, day, year);

	return (0);
}
