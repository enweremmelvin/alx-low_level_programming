/**
 * *_memset - assign a value to array index
 *
 * @s: value to be changed at specified index
 * @b: new value to be used
 * @n: number of indexes to modify
 *
 * Return: 0 at the end
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (0);
}
