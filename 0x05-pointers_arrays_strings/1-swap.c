#include "holberton.h"

/**
  * swap_int - swaps the value of two integers.
  * @a: pointer to the first number.
  * @b: pointer to the second number.
  */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
