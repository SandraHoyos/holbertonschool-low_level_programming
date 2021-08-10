#include "main.h"
/**
 * create_file - function to create file
 * @filename: pointer to the file name to be created
 * @text_content: str to be written in the file
 * Return: 1 success -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int op, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (op == -1)
	{
		return(-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
		write(op, text_content, i);
	}
	close(op);

	return (1);
}
