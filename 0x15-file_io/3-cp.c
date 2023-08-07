#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error - checks if the file has an error
 * @msg: message to be copied
 * @file_name: name of the file
 * @exit_code: used to show exit of code
 */
void print_error(char *msg, char *file_name, int exit_code)
{
	fprintf(stderr, msg, file_name);
	exit(exit_code);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to a pointer to the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char fd_from, fd_to;
	ssize_t bytesRead;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "", 97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read form file %s\n", argv[1], 98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytesRead) != bytesRead)
		{
			print_error("Error: Can't write to %s\n", argv[2], 99);
		}
	}
	if (bytesRead == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", *fd_from, 100);
	}
	if (close(fd_to) == -1)
	{

		print_error("Error: Can't close fd %d\n", *fd_to, 100);
	}
	return (0);
}
