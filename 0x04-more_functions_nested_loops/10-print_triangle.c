#include "holberton.h"

/**
  * print_triangle - prints a right triangle.
  * @size - the size (hight and width) of the triangle.
  */
void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		j = 0;
		while (j < (size - i))
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
