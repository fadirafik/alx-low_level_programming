#include "main.h"

/**
 * append_text_to_file - appends a given text
 * to a file
 * @filename: pointer to the file given
 * @text_content: text to be written
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND);
	while (text_content[len])
		len++;
    if (text_content)
	    w = write(fd, text_content, len);
	if (fd < 0 || w < 0)
		return (-1);

	close(fd);
	return (1);
}
