#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and prints it to the POSIX
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 *
 * Returns: 0 if file con not be opened or read or NULL or fails to write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buf[letters];
	size_t nread = 0;
	char c;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	while ((c = fgetc(fp)) != EOF && nread < letters)
	{
		buf[nread++] = c;
	}

	fclose(fp);

	if (nread == 0)
		return (0);

	if (write(STDOUT_FILENO, buf, nread) != nread)
		return (0);

	return (nread);
}
