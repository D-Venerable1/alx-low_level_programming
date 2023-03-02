#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: Pointer to the buffer where the result will be stored
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, sum, carry = 0;

	for (l1 = 0; n1[l1]; l1++)
		;
	for (l2 = 0; n2[l2]; l2++)
		;
	if (l1 >= size_r || l2 >= size_r)
		return (0);
	for (i = l1 - 1, j = l2 - 1, k = 0; k < size_r - 1 && (i >= 0 || j >= 0); i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}
	if (carry && k < size_r - 1)
	{
		r[k] = carry + '0';
		k++;
	}
	if (k == size_r - 1 && (i >= 0 || j >= 0 || carry))
		return (0);
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}
	return (r);
}
