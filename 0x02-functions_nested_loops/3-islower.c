#include "holberton.h"

/**
  * _islower - checkes for lowercase character
  *
  * Return: 1 if c is lower, otherwise 0.
  * @c: The character to check.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
