#include "main.h"
/**
 * main - main function entry point
 * @argc: number of arguments passed
 * @argv: arguments being passed
 * Return: 98 read err, 99 write err, 100 close err, 0 sucess
 *
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}


/**
 * copy_file - function that copy
 * @arg1: number of arguments passed
 * @arg2: arguments being passed
 * Return: 98 read err, 99 write err, 100 close err, 0 sucess
 *
 */
void copy_file(const char *arg1, const char *arg2)
{
	int op, cop, rd;
	char buf[1024];

	op = open(arg1, O_RDONLY);
	if (!arg1 || op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	cop = open(arg2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rd = read(op, buf, 1024)) > 0)
	{
		if (write(cop, buf, rd) != rd || cop == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg2);
		exit(99);
		}
	}

	if (close(op) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op);
	exit(100);
	}

	if (close(cop) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cop);
		exit(100);
	}

	if (rd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
	exit(98);
	}
}
