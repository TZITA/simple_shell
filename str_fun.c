#include "main.h"

/**
 * str_cmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0.
 */

int str_cmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
