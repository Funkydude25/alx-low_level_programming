#include "main.h"

/**
 * print_rev -> main function
 * @s: pointer, the string to print
 * Return: none
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
