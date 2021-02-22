#include "holberton.h"

/**
  * _strchr - locates a character in a string.
  * @s: the string where the character will be located.
  * @c: the character to be located.
  * Return: a pointer to the first occurrence of the character c.
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s++)
	{
		if (*(s + i) == c)
			break;
	}
	return (s + i);
}
