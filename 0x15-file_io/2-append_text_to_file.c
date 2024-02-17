#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 *
 *@filename: the name of the file.
 *@text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (!filename)
		return (-1);
	
	fptr = fopen(filename, "a");
	if (!fptr)
		return (-1);
	else
	{
		if (!text_content)
			return (1);
	}
	fwrite(text_content, sizeof(char), strlen(text_content), fptr);
	fclose(fptr);
	return (1);
}
