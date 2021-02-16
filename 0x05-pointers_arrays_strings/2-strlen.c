#include "holberton.h"

/**
  * _strlen - returns the length of a string/
  * @s: The string to be counted.
  * Return: the length
  */
int _strlen(char *s)
{
	int count, i = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
