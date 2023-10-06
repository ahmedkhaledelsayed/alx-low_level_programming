#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to file.
 * @text_content: pointer to string.
 * Return: 1 if sucess -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, out_write, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		out_write = write(fd, text_content, len);
		if (out_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
