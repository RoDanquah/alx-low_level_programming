#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char in a string.
 * @s: source string
 * @c: target character
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
