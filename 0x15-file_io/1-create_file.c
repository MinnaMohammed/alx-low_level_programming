#include "main.h"

/**
 * create_file - creates a file.
 *
 *@filename: the the name of the file to create.
 *@text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);
	if (text_content)
		dprintf(fp, "%s", text_content);
	close(fp);
	return (1);
}
