#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 if program execution succeed
  */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;
	while (i <= 57)
	{
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
				putchar(',');
			putchar(32);
			j++;
		}
		i++;
		j = 48;
	}
	putchar('\n');
	return (0);
}
