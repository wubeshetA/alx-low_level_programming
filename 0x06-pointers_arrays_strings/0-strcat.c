#include "holberton.h"
/**
  * _strcat - concatenates two strings.
  * @dest: destination string.
  * @src: source string to append to the dest string.
  * Return: pointer to the dest.
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
