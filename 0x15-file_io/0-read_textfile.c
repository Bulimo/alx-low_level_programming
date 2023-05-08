#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
  * read_textfile - reads a text file and prints to standard output
  * @filename: pointer to the file where text is stored
  * @letters: number of bytes to print from filename
  * Return: number of bytes printed, 0 otherwise
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t write_count = 0;
	ssize_t read_count = 0;
	int fdes = 0;
	char *buffer;

	if (filename != NULL)
	{
		fdes = open(filename, O_RDONLY);
		if (fdes == -1)
			return (0);
		buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
		{
			close(fdes);
			return (0);
		}
		read_count = read(fdes, buffer, letters);
		if (read_count == -1)
		{
			free(buffer);
			close(fdes);
			return (0);
		}
		write_count = write(STDOUT_FILENO, buffer, read_count);
		close(fdes);
		free(buffer);

		if (write_count == -1)
			return (0);
	}
	return (write_count);
}
