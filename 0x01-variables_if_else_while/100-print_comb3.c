#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 if execution succeed
  */
int main(void)
{
	int i, j;

	i = 48;
	j = 49;
	while (i <= 57)
	{
		while (j <= 57 && i != j)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(32);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
