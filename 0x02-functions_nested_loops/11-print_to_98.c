#include <stdio.h>
#include "holberton.h"

/**
  * print_to_98 - prints all natural numbers form n to 98.
  * @n: The initial value of the list.
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
