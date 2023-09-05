#include "main.h"

/**
 * main - copies file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 97 of 98 of 99 or 100
*/
int main(int argc, char *argv[])
{
	char *fileto = argv[2], *filefrom = argv[1];
	char buffer[BUFSIZ];
	int x, r, w, or, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	or = open(filefrom, O_RDONLY);
	if (or < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	wr = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(or, buffer, BUFSIZ)) > 0)
	{
		if (wr < 0 || write(wr, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
			close(or);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = close(or), w = close(wr);
	if (r < 0 || w < 0)
	{
		if (r < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", or);
		if (w < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wr);
		exit(100);
	}
	return (0);
}
