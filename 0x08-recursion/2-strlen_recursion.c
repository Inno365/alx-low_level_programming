#include "main.h"

/**
 * _strlan_recursion - returns the length of a string.
 * @s: calculates the length of string.
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}	
