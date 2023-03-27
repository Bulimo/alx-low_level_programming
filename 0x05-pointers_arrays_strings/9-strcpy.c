/**
  * _strcpy - copies the string src to dest
  * @src: source string to be copied
  * @dest: where to copy src
  * Return: void
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;			/* loop counter */

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

