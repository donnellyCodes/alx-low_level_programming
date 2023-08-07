#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int bytesWritten = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
