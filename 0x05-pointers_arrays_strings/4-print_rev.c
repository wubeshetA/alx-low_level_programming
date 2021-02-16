#include "holberton.h"
#include <string.h>

/**
  * print_rev - print a string in reverse.
  * @s: pointer to the string to be printed.
  */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
