#include "main.h"
/**
 *_pow_recursion - returns value of x raised by power of y.
 *@y: is a power.
 *@x: is a base.
 *Return: base raise to power.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
