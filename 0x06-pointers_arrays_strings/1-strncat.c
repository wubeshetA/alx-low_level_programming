#include "holberton.h"
/**
  * _strncat - concatenate tow strings
  * @dest: destination string
  * @src: source string to append to the dest string.
  * @n: the number of bytes from src to be append.
  * Return: pointer to dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n)
	{
		*(dest + i) = *(src + i);
		i++;
		j++;
	}
	return (dest);
}
