#include "holberton.h"

/**
  * more_numbers - prints 10 times the numbers,
  * from 0 to 14.
  */
void more_numbers(void)
{
	int i, a, b, k;
	for (k = 0; k < 10; k++)
	{
		for (i = 1; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;
			if (i >= 10)
				_putchar('0' + a);
			_putchar('0' + b);
		}		
		_putchar('\n');
	}
}
