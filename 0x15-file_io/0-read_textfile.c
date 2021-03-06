#include "main.h"
/**
 * read_textfile - Function that reads a file and prints it
 * @filename: ptr to the file to read and print
 * @letters: number of bytes to print
 * Return: 0 else number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	ssize_t rd, op;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
	return (0);

	op = open(filename, O_RDONLY);

	rd = read(op, buf, letters);
	write(STDOUT_FILENO, buf, rd);
	if (op == -1)
	return (0);
	free(buf);
	close(op);
	return (rd);
}
