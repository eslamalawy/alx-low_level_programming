#include "main.h"
#include <stdio.h>
/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int itr, jtr;

for (itr = 0; haystack[itr] > '\0'; itr++)
{
	for (jtr = itr; haystack[jtr] > '\0' && needle[jtr - itr] > '\0'; jtr++)
	{
		if (haystack[jtr] != needle[jtr - itr])
		{
			break;
		}
	}
	if (needle[jtr - itr] == '\0')
	{
		return (haystack + itr);
	}
}
return (0);
}
