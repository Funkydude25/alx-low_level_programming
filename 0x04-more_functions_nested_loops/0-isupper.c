#include "main.h"

/**
 * _isupper -> checks for lowercase character
 * @c: an integer parameter
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
