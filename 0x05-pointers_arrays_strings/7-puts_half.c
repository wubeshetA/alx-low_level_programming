#include <string.h>
#include "holberton.h"

/**
  * puts_half - prints half of a string.
  * @str: pointer to the string where the half is selected to be printed.
  */
void puts_half(char *str)
{
	int i = strlen(str) % 2 ? ((strlen(str) - 1) / 2) + 1 : strlen(str) / 2;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
