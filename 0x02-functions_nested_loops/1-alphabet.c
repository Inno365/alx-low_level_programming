#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - prints alphabet in a loop.
 * Return: 0 on exit
 */

void print_alphabet(void)
{
       	char c = 'a';

        while (c <= 'z')
        {
	       	_putchar(c);
                c++;

        }
	_putchar('\n');
}
