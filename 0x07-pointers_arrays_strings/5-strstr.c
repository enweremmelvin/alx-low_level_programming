#include <string.h>

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
	unsigned int i, j;
	int match;
	char *ptr;

	i = 0;

	while (i < strlen(needle))
	{
		j = 0;

		while (j < strlen(haystack))
		{
			if (needle[i] == haystack[j])
			{
				match++;
				ptr = &haystack[j];

				break;
			}

			j++;
		}

		if (match == 1)
			break;

		i++;
	}

	if (match == 1)
		return (ptr);
	else
		return (NULL);
}
