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
	int fp;
	ssize_t fpRead, fpWrite, fpClose;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (-1);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	fpRead = read(fp, buf, letters);

	if (fpRead == -1)
		return (-1);

	fpWrite = write(STDOUT_FILENO, buf, fpRead);

	if (fpWrite == -1)
		return (-1);
	fpClose = close(fp);

	if (fpClose == -1)
		return (-1);

	return (fpRead);
}
