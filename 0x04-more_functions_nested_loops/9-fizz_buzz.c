#include <stdio.h>
#include "holberton.h"

/**
  * main - entry point.
  * Return: 0 on success.
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i != 100)
				printf("%s ", "Buzz");
			else
				printf("%s", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("%c", '\n');
	return (0);
}
