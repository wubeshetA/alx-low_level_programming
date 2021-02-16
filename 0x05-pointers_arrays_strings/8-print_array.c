#include <stdio.h>
#include "holberton.h"

/**
  * print_array - prints n elements of an array of integers.
  * @a: pointer to array of intergers.
  * @n: the number of elements to print
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if ((i + 1) != n)
			printf(", ");
		i++;
	}
	putchar('\n');
}
