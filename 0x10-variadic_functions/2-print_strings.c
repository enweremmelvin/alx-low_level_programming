#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_strings - print variable number of strings
 *
 * @separator: string seperators
 * @n: number of string arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	va_list strarg;
	unsigned int i, j;

	va_start(strarg, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strarg, char *);

		if (strcmp(string, "NULL") == 0)
			printf("(nil)");
		else
			printf("%s", string);

		if (!(strcmp(separator, "NULL") == 0) && (i < n - 1))
		{
			for (j = 0; j < strlen(separator); j++)
				printf("%c", separator[j]);
		}
	}

	va_end(strarg);

	printf("\n");
}
