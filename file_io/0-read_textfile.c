#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a specified number of letters
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	int file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	char *buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	ssize_t bytesRead;

	bytesRead = read(file, buffer, letters);
	if (bytesRead < 0)
	{
		close(file);
		free(buffer);
		return (0);
	}
	ssize_t bytesWritten;

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	close(file);
	if (bytesWritten < 0 || (size_t)bytesWritten != (size_t)bytesRead)
	{
		return (0);
	}
	return (bytesRead);
}
