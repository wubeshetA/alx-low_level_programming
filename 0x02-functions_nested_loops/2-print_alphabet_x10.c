#include "holberton.h"

/**
  * print_alphabet_x10 - prints the alphabet, in lowercase 10 times
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}

	_putchar('\n');
	}
}

/**
  * main - entry point
  */
void main(void)
{
	print_alphabet_x10();
}
