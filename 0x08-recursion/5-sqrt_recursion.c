#include "main.h"

/**
 *_sqr_recursion - return a square root of a number.
 *@n: number of a root.
 *Return: the root.
 */
int _sqr_recursion(int n)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqr_recursion(n, i + 1));
}
