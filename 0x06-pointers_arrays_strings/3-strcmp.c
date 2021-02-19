#include "holberton.h"

/**
  * _strcmp - concatenates two strings.
  * @s1: the first string to compare.
  * @s2: the second sting.
  * Return: if s1==s2 0 otherwise, the difference beteween s1 and s2
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + 1) == *(s2 + i))
	{
		i++;
		if (!(*(s1 + i) || *(s2 + i)))
		{
			return (0);
		}
	}
	return (*(s1 + i) - *(s2 + i));
}
