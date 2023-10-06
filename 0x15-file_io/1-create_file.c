#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file.
 * @letters: size of characters.
 * Return: Actual number of letters it could read and print.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t out_write;

	if (filename == NULL)
	{
		return (0);
	}
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
		{
			len++;
		}
		out_write = write(fd, text_content, len);
		if (out_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
}
