#include "main.h"

/**
 * create_file -creates a file
 * @filename: filename pointer =
 * @text_content: the text to be written in the file
 *
 * Return: 1 on success or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fp;
	int succ;
	mode_t mode = 0600;

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);

	if (fp < 0 || !filename)
		return (-1);

	if (text_content != NULL)
	{
		succ = write(fp, text_content, sizeof(text_content));
	}
	if (succ < 0)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
