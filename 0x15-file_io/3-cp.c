#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1024
/**
 * error_exit - checks for error files
 * @msg: error message
 * @error_code: actual error
 */
void error_exit(const char *msg, int error_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(error_code);
}
/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;
	const char *file_from = argv[1];
        const char *file_to = argv[2];

	if (argc != 3)
		error_exit("Usage: cp file_from file to", 97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
