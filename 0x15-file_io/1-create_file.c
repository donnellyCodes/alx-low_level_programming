#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file and writes text in it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int bytesWritten = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[bytesWritten])
			bytesWritten++;
		if (write(file, text_content, bytesWritten) != bytesWritten)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
