#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 if execution succeed
  */
int main(void)
{
	int i, j, k, m;

	i = 48;
	j = 48;
	k = 48;
	m = 49;
	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				while (m <= 57 && (i != k || j != m))
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(m);
					if (i != 57 || j != 56)
					{
						putchar(',');
						putchar(32);
					}
					m++;
				}
				k++;
				m = j;
			}
			j++;
			k = i;
			m = j + 1;
		}
		i++;
		j = 48;
		k = i + 1;
	}
	putchar('\n');
	return (0);
}
