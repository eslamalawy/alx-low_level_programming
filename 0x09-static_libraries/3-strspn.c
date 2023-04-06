#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
