#include "holberton.h"

/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: The number in which the times talbe to be print.
  */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	int i, j, a, b, c;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int num =  i * j;

			b = num / 10;
			c = num % 10;
			if (num <= 9)
			{
				if (j != 0)
				{
					_putchar(32);
					_putchar(32);
				}
			}
			else if (num > 9 && num < 100)
			{
				_putchar(32);
				_putchar('0' + b);
			}
			else if (num >= 100)
			{
				_putchar('0' + (num / 100));
				_putchar('0' + (b % 10));
			}
			_putchar('0' + c);
			if (j != n)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
