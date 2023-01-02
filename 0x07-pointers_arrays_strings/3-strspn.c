#include <string.h>
#include <stdio.h>

/**
 * _strspn - get the length of prefix substring
 *
 * @s: string to be searched
 * @accept: string to be matched
 *
 * Return: number of non-repetitive matched found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int match;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	i = 0;
	match = 0;

	while (i <= accept_len)
	{
		j = 0;

		while (j <= s_len)
		{
			if (accept[i] == s[j])
			{
				match++;
				break;
			}

			j++;
		}

		i++;
	}

	return (match);
}
