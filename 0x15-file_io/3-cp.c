#include "main.h"
#include <stdio.h>

/**
* file_error - a function for checking files opening
* @file_from: the source file.
* @file_to: the destination file.
* @argv: an array.
* Return: nothing.
*/

void file_error(int file_from, int file_to, char *argv[])
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
* main - a function for checking student codes
* @argc: total arguments.
* @argv: an array.
* Return: 0.
*/

int main(int argc, char *argv[])
{
Int err, file_from, file_to;
ssize_t tally, filewr;
char pbuffer[1024];

/*ensures number of arguments is 3, else prints error*/
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

/*opening the files*/
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_error(file_from, file_to, argv);

/*a loop to read 1024 data bytes into a buffer*/
tally = 1024;
while (tally == 1024)
{
tally = read(file_from, pbuffer, 1024);
if (tally == -1)
file_error(-1, 0, argv);
filewr = write(file_to, pbuffer, tally);
if (filewr == -1)
file_error(0, -1, argv);
}
err = close(file_from);
if (err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err = close(file_to);
if (err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
