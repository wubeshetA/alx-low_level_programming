#include "holberton.h"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: the string
  * @accept: the string where the intial segment of s is selected
  * Return: the number of bytes in the itial segment of s.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	j = 0;
	while (*(s + j))
	{
		i = 0;
		while (*(accept + i))
		{
			if (*(s + j) == *(accept + i))
			{
				count++;
				break;
			}
			i++;
		}
		if (*(accept + i) == 0)
			return (count);
		j++;
	}
	return (count);
}
