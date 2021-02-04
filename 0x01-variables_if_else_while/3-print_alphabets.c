#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 if execution succeed
  */
int main(void)
{
	int i, j;

	i = 97;
	j = 65;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
