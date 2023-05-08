#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file to be appended
  * @text_content: NULL terminated string to append to filename
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fdes = 0;
	ssize_t result = 0;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_RDWR | O_APPEND);
	if (fdes == -1)
		return (-1);
	if (!text_content)
		return (1);
	len = _strlen(text_content);
	result = write(fdes, text_content, len);
	close(fdes);
	if (result == -1)
		return (-1);
	return (1);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */
size_t _strlen(char *s)
{
	size_t len = 0;			/* store string length */
	size_t i = 0;				/* loop counter */

	if (s != NULL)
	{

		while (*(s + i++))
			len++;
	}
	return (len);
}

