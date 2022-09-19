#include "main.h"
#include <stdio.h>

/**
 * puts2 -> main function
 * @str: pointer, the string to print
 * Desc: this function prints every other character of a string divisible by 2
 * Return: none
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
