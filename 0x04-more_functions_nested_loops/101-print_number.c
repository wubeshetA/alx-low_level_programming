#include "holberton.h"

/**
  * print_number - prints an integer using only _putchar function.
  * @n: The number to be printed.
  */
void print_number(int n)
{
	int d, k, num, tmp;

	d = 0;
	k = 1;
	tmp = n;
	while (n / 10 != 0)
	{
		n = n / 10;
		d++;
	}
	if (tmp < 0)
	{
		_putchar('-');
		tmp = -tmp;
	}
	while (d >= 1)
	{
		for (int a = 0; a < d; a++)
			k *= 10;
		num = tmp / k;
		tmp = tmp % k;
		_putchar('0' + num);
		d--;
		k = 1;
	}
	_putchar('0' + tmp);
}
