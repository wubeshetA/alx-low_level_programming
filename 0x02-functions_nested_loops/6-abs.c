#include "holberton.h"

/**
  * _abs - computes the absolute value of an integer.
  * Return: absolut value of n.
  * @n: The integer to compute
  */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
