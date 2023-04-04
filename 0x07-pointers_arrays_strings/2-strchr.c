#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates character in string
 * @s: the string to search
 * @c: the char to find
 *
 * Return: a pointer to the first occurrence of character
 * c in the string s, or NULL the character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
