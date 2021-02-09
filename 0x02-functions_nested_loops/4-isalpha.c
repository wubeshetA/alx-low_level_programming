#include "holberton.h"

/**
  * _isalpha - checks for alphabetic character.
  * Return: 1 if c is a letter, lowecase or uppercase, otherwise 0.
  * @c: The character to check
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
