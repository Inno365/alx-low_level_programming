#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to first value.
 * @b: pointer to second value.
 * @s: variable to hold swaped value.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}