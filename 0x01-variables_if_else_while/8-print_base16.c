#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 if execution succeed
  */
int main(void)
{
	int i, j;

	i = 48;
	j = 97;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
