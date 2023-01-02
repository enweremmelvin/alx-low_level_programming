#include <string.h>
#include <stdio.h>

/**
 * *_strstr - find the needle in the haystack
 *
 * @haystack: where to search
 * @needle: what to search for
 *
 * Return: return pointer to first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, match;
	char *ptr;

	for (i = 0; i < strlen(needle); i++)
	{
		for (j = 0; j < strlen(haystack); j++)
		{
			if (needle[i] == haystack[j])
			{
				match = 1;
				ptr = &haystack[j];

				break;
			}
		}

		if (match == 1)
			break;
	}

	if (match == 1)
		return (ptr);
	else
		return (NULL);
}
