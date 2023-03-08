#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of.
 *
 * Return: the natural square root of n.
 * If n does not have a natural square root,return -1 to indicate an error.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - helper function to find the natural square root of a number.
 * @n: the number to find the square root of.
 * @start: the start of the search range.
 * @end: the end of the search range.
 *
 * Return: the natural square root of n.
 * If n does not have a natural square root,return -1 to indicate an error.
 */
int find_sqrt(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid > n)
		{
			return (find_sqrt(n, start, mid - 1));
		}
		return (find_sqrt(n, mid + 1, end));
	}
	return (-1);
}
