#include "holberton.h"

/**
  * jack_bauer - prints every minute of a day.
  */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	hr1 = hr2 = min1 = min2 = 48;
	while (hr1 <= 50)
	{
		while (hr2 <= 57)
		{
			while (min1 <= 53)
			{
				while (min2 <= 57)
				{
					_putchar(hr1);
					_putchar(hr2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
					min2++;
				}
				min2 = 48;
				min1++;
			}
			min1 = 48;
			hr2++;
			if (hr1 == 50 && hr2 == 52)
				break;
		}
		hr2 = 48;
		hr1++;
	}
}
