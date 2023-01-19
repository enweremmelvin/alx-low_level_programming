#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_all - print specified input
 *
 * @format: format identifier
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *string, *spec = "cifs";
	unsigned int i = 0, j;

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (spec[j]) /* loop for seperator */
		{
			if ((spec[j] == format[i]) && i != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i]) /* switch statement to match identifiers*/
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%i", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		case 's':
			string = va_arg(arg, char *);
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} i++;
	}
	printf("\n");
	va_end(arg);
}
