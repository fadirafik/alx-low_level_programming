#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the posix standard output
 * @filename: pointer to the file to be created
 * @letters: size of the file in bytes
 *
 * Return: o if fail or the number of letter it could read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	int len;
	int i;
	char *data = malloc(sizeof(char) * letters);

	fp = open(filename, O_RDONLY);
	if (!filename || !data || fp == -1)
	{
		free(data);
		return (0);
	}

	i = read(fp, data, letters);
	if (i < 0)
	{
		free(data);
		return (0);
	}
	data[i] = '\0';
	len = write(STDOUT_FILENO, data, i);
	if (len < 0 || len != i)
	{
		free(data);
		return (0);
	}
	free(data);
	close(fp);
	return (len);
}
