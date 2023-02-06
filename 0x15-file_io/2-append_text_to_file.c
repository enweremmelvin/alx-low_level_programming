#include "main.h"

/**
 * append_text_to_file - append text to a file
 *
 * @filename: name of file to append to
 * @text_content: content to be appended to file
 *
 * Return: 1 on success; -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fputs_ret_val;
	FILE *fopen_ret_str;

	if (filename == NULL)
		return (-1);

	fopen_ret_str = fopen(filename, "a");

	if (fopen_ret_str == NULL)
		return (-1);

	fputs_ret_val = fputs(text_content, fopen_ret_str);

	if (!(fputs_ret_val >= 0))
		return (-1);

	fclose(fopen_ret_str);
	return (1);
}
