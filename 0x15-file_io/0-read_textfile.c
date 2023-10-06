#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file.
 * @letters: size of characters.
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, out_read, out_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	out_read = read(fd, buffer, letters);
	if (out_read == -1)
	{
		free(buffer);
		return (0);
	}
	out_write = write(STDOUT_FILENO, buffer, out_read);
	if (out_write == -1 || out_read != out_write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (out_write);
}
