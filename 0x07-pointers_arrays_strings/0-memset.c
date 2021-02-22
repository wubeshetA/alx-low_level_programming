#include "holberton.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: a pointer to the memory area.
  * @b: the constatn byte.
  * @n: the number of first bytes to fill.
  * Return: a pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
