#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t message_len = 60;

	ssize_t bytes_written = write(2, message, message_len);

	if (bytes_written != message_len) 
{
	return 1;
}
	return 0;
}
