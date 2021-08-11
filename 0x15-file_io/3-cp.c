#include "main.h"
/**
 * main - main function entry point
 * @argc: number of arguments passed
 * @argv: arguments being passed
 * Return: 98 read err, 99 write err, 100 close err, 0 sucess
 *
 */

#include "main.h"

int main(int argc, char *argv[])
{
	/* debe recibir solamente 3 argumentos */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	/*se llama la funcion y se pasan dos argumentos */
	copy_file(argv[1],argv[2]);

	/retorno exitoso/
		 exit(0);
}

void copy_file(const char * origin, const char * copy)
{
	/* buffer para reducir los llamados al sistema */
	char * buffer[1024];

	int op, rd;
	int copys;

	/* se define syscall open a archivo como solo lectura */
	op = open(origin, O_RDONLY);

	/* si no existe origin o no se puede leer genera error */
	if (origin == NULL || op == -1)
	{
	dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", origin);
	exit(98);
	}

	/* definit syscall open a copia de archivo*/
	copys = open(copy, O_CREAT | O_WRONLY | O_TRUNC , 664);

	if (copy == NULL ||copys == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", copy);
		exit(98);
	}

	/*  */
	while((rd = read(op, buffer, 1024)) != 0)
	{
		if (write(op, buffer, rd) == -1)
		{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", copy);
		exit(99);
		}
	}

	if (rd == -1)
	{

	}

	close (op);
	close (copys);

}
