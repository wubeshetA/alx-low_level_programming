#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals of
  * a square matrix of integers.
  * @a: a pointer to the square matrix
  * @size: the size of the aquare matix.
  */
void print_diagsums(int *a, int size)
{
	int d1, d2, i, j;

	d1 = 0;
	d2 = 0;
	for (i = 0; i < size; i++)
		d1 += a[i][i];
	i = 0;
	j = size - 1;
	for (; j >= 0; i++, j--)
		d2 += a[i][j];
	printf("%d, %d", d1, d2);
}
