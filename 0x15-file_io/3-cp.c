#include "main.h"


/**
  * main - start point of the program
  * @argc: number of arguments passed
  * @argv: array of arguments passed as strings
  * Description: program that copies content of a file to another
  * Return: 0 on Success, 1 otherwise
  */
int main(int argc, char **argv)
{
	char	buffer[1024] = {'\0'};
	ssize_t	read_count = 0,	write_count = 0;
	int		fd_from = 0,	fd_to = 0;

	if (argc != 3)
		print_error(97, argv[0]);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, argv[1]);
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, argv[2]);
	read_count = read(fd_from, buffer, 1024);
	if (read_count == -1)
		print_error(98, argv[1]);
	while (read_count)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 && write_count != read_count)
			print_error(99, argv[2]);
		read_count = read(fd_from, buffer, 1024);
		if (read_count == -1)
			print_error(98, argv[1]);
	}
	if (close(fd_to) == -1)
		print_error(fd_to, argv[2]);
	if (close(fd_from) == -1)
		print_error(fd_from, argv[1]);
	return (0);
}

/**
  * print_error - prints an error
  * @error: code of the error
  * @filename: file being accessed
  * Return: nothing
  */
void print_error(int error, char *filename)
{
	switch (error)
	{
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", filename);
			exit(error);
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", filename);
			exit(error);
			break;
		case 97:
			dprintf(2, "Usage: %s file_from file_to\n", filename);
			exit(97);
			break;
		default:
			dprintf(2, "Error: Can't close fd %d\n", error);
			exit(100);
			break;
	}
}
