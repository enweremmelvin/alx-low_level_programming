#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count: number of arguments supplied
 * @argv: argument vector: string or character arguments supplied
 *
 * Return: integer values
 */

int main(int argc, char *argv[])
{
	FILE *from, *to;
	char str[READ_MAX];
	int to_close, from_close;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = fopen(argv[1], "r");
	if (from == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = fopen(argv[2], "w+");
	if (to == NULL)
	{
		fclose(from);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fgets(str, READ_MAX, from))
	{
		if (fputs(str, to) < 0)
		{
			fclose(to);
			fclose(from);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	to_close = fclose(to);
	from_close = fclose(from);
	if (to_close != 0 || from_close != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", to_close | from_close);
		exit(100);
	}
	return (0);
}
