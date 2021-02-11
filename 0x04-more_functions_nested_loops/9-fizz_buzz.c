#include <stdio.h>

/**
  * fizz_buzz - prints numbers fro  1 to 100.
  * but for multiples of 3 print 'Fizz' instead of the number and
  * for multiples of 5 print 'Buzz'. For numbers which are multiples
  * of both numbers print 'FizzBuzz'.
  */
void fizz_buzz(void)
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
	printf('\n');
}
