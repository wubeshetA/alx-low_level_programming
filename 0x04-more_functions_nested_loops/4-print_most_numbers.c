#include "holberton.h"

/**
  * print_most_numbers(void);
  */
void print_most_numbers(void)
{
	for (int i =  48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
