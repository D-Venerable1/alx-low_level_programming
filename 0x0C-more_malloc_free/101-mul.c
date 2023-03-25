#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
void _puts(char *s);
int _isdigit(char *s);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void multiply(char *num1, char *num2);

/**
 * _strlen - calculates the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 */
void _puts(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		putchar(s[len]);
		len++;
	}
}

/**
 * _isdigit - checks if a string is composed only of digits
 * @s: the string to check
 * Return: 1 if composed only of digits, 0 otherwise
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _memset - fills memory with a constant byte
 * @s: the memory to fill
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	p = ptr;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (ptr);
}

/**
 * multiply - multiplies two numbers
 * @num1: the first number
 * @num2: the second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int i, j, carry, n1, n2, sum;
	int *result;

	if (len1 == 0 || len2 == 0 || !_isdigit(num1) || !_isdigit(num2))
	{
		_puts("Error");
		exit(98);
	}
	result = _calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		_puts("Error");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
	}
}
