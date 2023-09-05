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
	int len;
	mode_t mode = 0600;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);

	if (fp < 0)
	{
		close(fp);
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	succ = write(fp, text_content, len);
	if (succ < 0)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
