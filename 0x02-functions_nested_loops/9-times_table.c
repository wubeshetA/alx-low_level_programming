#include "holberton.h"

/**
  * times_table - prints the 9 times table.
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int num =  i * j;
			int a, b;

			if (num <= 9)
			{
				if (j != 0)
					_putchar(32);
			_putchar('0' + num);
			}
			else if (num > 9)
			{
				a = num / 10;
				b = num % 10;

				_putchar('0' + a);
				_putchar('0' + b);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
void main(void)
{
	times_table();
}
