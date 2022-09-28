#include "main.h"

/**
 * _strcmp -> compares pointers to two string.
 * @s1: a pointer to the first string to be compared.
 * @s2: a pointer to the second string to be compared.
 *
 * Return: if str1 < str2, the negative difference of
 * the first unmatched characters.
 *	if s1 == s2, o.
 *	if s1 > s2, the positive difference of
 *	the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}