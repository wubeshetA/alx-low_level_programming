#include "holberton.h"

/**
  * print_most_numbers - prints the numbers form 0 to 9 scapint 2 and 4.
  */
void print_most_numbers(void)
{
	int i;

	for (i =  48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
