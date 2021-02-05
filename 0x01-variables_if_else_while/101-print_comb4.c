#include <stdio.h>

/**
 * main - the usual entry point
 * Return: 0 if execution succeed
 */
int main(void)
{
	int i, j, k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57 && i != j && j != k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(32);
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);	
}
