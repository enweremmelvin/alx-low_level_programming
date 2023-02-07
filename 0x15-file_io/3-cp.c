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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	} fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	for (c = getc(fptr); c != EOF; c = getc(fptr))
		count += 1;
	fclose(fptr);
	read_str = malloc(count);
	open_val = open(argv[1], O_RDONLY);
	read_val = read(open_val, read_str, count);
	if ((open_val == -1) || (read_val == -1))
	{
		free(read_str);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_open = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	write_val = write(to_open, read_str, read_val);
	if ((to_open == -1) || (write_val == -1))
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	} close_to = close(to_open);
	close_from = close(open_val);
	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to_open);
		exit(100);
	}
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", open_val);
		exit(100);
	} return (0);
}
