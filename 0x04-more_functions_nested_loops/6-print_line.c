#include "holberton.h"

/**
  * print_line - draws a straight line.
  * @n: the number of times the character _ should be printed.
  */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
			break;
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
