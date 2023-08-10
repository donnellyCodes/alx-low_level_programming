#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - displays the information contained in the ELF header
 * @argc: number of arguments
 * @argv: argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t b_read;
	char buffer[5];
	char elf[1];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		exit(97);
	}
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98);
	}
	b_read = read(fd, buffer, 4);
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b_read = lseek(fd, 1, SEEK_SET);
	b_read = read(fd, elf, 1);
	if (elf[0] != 'E')
		exit(98);
	close(fd);
	return (0);
}
