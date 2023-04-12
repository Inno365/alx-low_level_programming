#include "main.h"
#include <astlib.h>
/**
 *creates an array of char with specific char initialization.
 *@c: start an array of char.
 *@size: allocate size of array.
 *Return: pointer (success), NULL (Error).
 */

char *chreate_array(unsigned int size, char c)
{
	char *p;

	unsigned int i = 0;
	if (size == 0)
	{
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while(i < size)
	{
		*(p + i) = c;
		i++;
	}
	}
}
