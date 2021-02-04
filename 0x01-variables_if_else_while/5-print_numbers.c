#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 if execution succeed
  */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
