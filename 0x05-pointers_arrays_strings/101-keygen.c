#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum, diff, n;
	char password[7];

	srand(time(NULL));

	i = 0;
	sum = 0;
	while (sum < 2772 - 122)
	{
		n = rand() % 62;
		if (n < 26)
			password[i] = 'A' + n;
		else if (n < 52)
			password[i] = 'a' + n - 26;
		else
			password[i] = '0' + n - 52;
		sum += password[i];
		i++;
	}
	diff = sum - 2772 + 122;
	password[i - 1] -= diff;

	printf("%s\n", password);

	return (0);
}
