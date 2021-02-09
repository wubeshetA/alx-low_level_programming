#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number
  * Return: last digit of n.
  * @n: The integer in which the last digit to be determined.
  */
int print_last_digit(int n)
{
	int num;

	if (n >= 0)
	{
		num = n % 10;
		_putchar('0' + num);
	}
	else
	{
		num = -(n) % 10;
		_putchar('0' + num);
	}
	return (num);
}
