#include "main.h"

/**
 * main - main function.
 *
 *@argc: number of args
 *@argv: arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int fp_read, fp_write;

	if (argc < 1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_read = open(argv[1], O_RDONLY);
	if (fp_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fp_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fp_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(fp_read) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_read);
		exit(100);
	}

	if (close(fp_write) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_write);
		exit(100);
	}


}
