#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int to_open_ret_val;
	int to_write_val;

	int from_open_ret_val;
	int from_read_ret_val;

	char *from_content;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* handle the file we are copying from */
	from_open_ret_val = open(argv[1], O_RDONLY);
	if (from_open_ret_val == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	else
	{
		from_read_ret_val = read(from_open_ret_val, from_content);
		if ()
	}
}
