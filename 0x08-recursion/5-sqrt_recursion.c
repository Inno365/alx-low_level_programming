#include "main.h"

/**
 *_sqr_recursion - return a square root of a number.
 *@n: number of a root.
 *Return: the root.
 */
int _sqr_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqr_recursion(n, 0));
}
