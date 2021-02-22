#include "holberton.h"
#include <stdio.h>
/**
  * _memcpy - copies memory area.
  * @dest: a pointer to the memory area where the char from src be copy
  * @src: a ponter to the source of the char
  * Return: a pointer to dest.
  * @n: number of memory area to copy.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
