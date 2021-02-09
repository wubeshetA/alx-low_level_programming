#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number
  * Return: last digit of n.
  * @n: The integer in which the last digit to be determined.
  */
int print_last_digit(int n)
{
	if (n < 0)
		return ((-n) % 10);
	return (n % 10);
}
