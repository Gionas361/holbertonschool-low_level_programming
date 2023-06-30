#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int maxcount = 0, currstr = 0;

	while (haystack[maxcount])
	{
		while (needle[currstr])
		{
			if (haystack[maxcount + currstr] != needle[currstr])
			{
				break;
			}

			currstr++;
		}

		if (needle[currstr] == '\0')
		{
			return (haystack + maxcount);
		}

		maxcount++;
	}

	return ('\0');
}