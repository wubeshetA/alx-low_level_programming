#include "holberton.h"

/**
  * print_sign - prints the sign of a number
  * Return: 1 if n is +ve, 0 if n is 0, -1 if n is -ve.
  * @n: the character to be determined the sign.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
