#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int c;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
