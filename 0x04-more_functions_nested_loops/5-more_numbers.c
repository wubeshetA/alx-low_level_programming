#include "holberton.h"

/**
  * more_numbers - prints 10 times the numbers,
  * from 0 to 14.
  */
void more_numbers(void)
{
	int i, j;
	i = 48;
	j = 0;
	while (j < 14)
	{
		putchar(i);
		if (j >= 10)
		{
			i = 49;
			_putchar();
		}
		if (j <= 10)
			j++;
	}
	_putchar('\n');
}
