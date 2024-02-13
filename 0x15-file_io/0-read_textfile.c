#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 *@filename: the given file name.
 *@letters: the number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print
 * otherwise, return 0:
 * if the file can not be opened or read
 * if filename is NULL
 * if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *ch;
	ssize_t numOfChar = 0;

	if (!filename)
		return (0);


	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	ch = malloc(letters + 1);
	if (!ch)
	{
		fclose(fp);
		return (0);
	}
	numOfChar = fread(ch, 1, letters, fp);
	if (numOfChar < 0)
	{
		free(ch);
		fclose(fp);
		return (0);
	}

	fwrite(ch, 1, numOfChar, stdout);
	fclose(fp);
	free(ch);
	return (numOfChar);
}
