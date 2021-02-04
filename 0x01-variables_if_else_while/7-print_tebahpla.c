#include <stdio.h>
/**
 * main - the usual entry point
 * Return: 0 is execution succeed
 */
int main(void)
{
	int i = 123;

	while (i > 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
