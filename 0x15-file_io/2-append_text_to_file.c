#include "main.h"
/**
 * append_text_to_file - function to append text at the end of the file
 * @filename: pointer to the file
 * @text_content: content that needs to be appended
 * Return: 1 on sucess -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_RDWR | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
		write(op, text_content, i);
		if (!op)
		{
			return (-1);
		}

	}

	close(op);
	return (1);
}
