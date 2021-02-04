#include <stdio.h>

/**
  * main - the usual entry point
  * Return: 0 is execution succeed
  */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
