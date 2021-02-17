#include "holberton.h"

/**
  * rev_string - reverse a string.
  * @s: the string to be reversed.
  */
void rev_string(char *s)
{
	int k, j, i = 0;

	while (s[i] != '\0')
		i++;
	k = i;
	char tmp[i];

	i = i - 1;
	for (j = 0; j <= i; j++)
		tmp[j] = *(s + j);
	while (i >= 0)
	{
		*(s + (k - 1 - i)) = tmp[i];
		i--;
	}
}
