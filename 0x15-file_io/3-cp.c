#include "main.h"
#include <stdio.h>

/**
* error_file – a function for checking file opening.
* @file_from: source file.
* @file_to: destination file.
* @argv: array.
* Return: nothing.
*/
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
* main – a function for checking student codes.
* @argc: total arguments.
* @argv: array.
* Return: 0.
*/
int main(int argc, char *argv[])
{
int file_from, err_close, file_to;
ssize_t tally, filewr;
char pbuffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);

tally = 1024;
while (tally == 1024)
{
tally = read(file_from, pbuffer, 1024);
if (tally == -1)
error_file(-1, 0, argv);
filewr = write(file_to, pbuffer, tally);
if (filewr == -1)
error_file(0, -1, argv);
}

err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
