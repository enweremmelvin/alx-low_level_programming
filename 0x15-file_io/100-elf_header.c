#include "main.h"

/**
 * main - entry point: read an elf file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "Usage: elf_header elf_filename\n");
		return (1);
	}
}
