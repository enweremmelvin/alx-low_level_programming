#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - make a duplicate of provided string
 *
 * @str: provided string
 *
 * Return: pointer to duplicate string if success, null otherwise
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length = strlen(str);
	char *clone;

	clone = malloc((length + 1) * sizeof(char));

	if (length <= 0 || clone == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		clone[i] = str[i];

	clone[i] = '\0';

	return (clone);
}
