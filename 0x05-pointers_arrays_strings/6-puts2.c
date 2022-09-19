#include "main.h"

/**
 * puts2 -> main function
 * @str: pointer, the string to print
 * Desc: this function prints every other character of a string divisible by 2
 * Return: none
 */
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
