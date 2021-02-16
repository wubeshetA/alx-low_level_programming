#include "holberton.h"
#include <string.h>

/**
  * rev_string - reverse a string.
  * @s: the string to be reversed.
  */
void rev_string(char *s)
{
	char tmp[strlen(s)];
	int i = strlen(s) - 1;
	int j;

	for (j = 0; j <= i; j++)
		tmp[j] = *(s + j);
	while (i >= 0)
	{
		*(s + (strlen(s) - 1 - i)) = tmp[i];
		i--;
	}
}
