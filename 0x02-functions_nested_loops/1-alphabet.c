#include "holberton.h"

/**
  * print_alphabet - print the alphabet in lower case
  */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

/**
  * main - entry point
  */
void main(void)
{
	print_alphabet();
	return (0);
}
