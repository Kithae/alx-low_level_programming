#include "main.h"

/**
* read_textfile - a function that reads and prints a text file
* @filename: A string file name.
* @letters: max no. of bytes to read.
*
* Return: actual number of letters read and printed, else 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int a;
ssize_t filerd, filewr;
char *buffer;

/*to check if arguments is null*/
if (!filename)
return (0);

/*to open file in read-only mode. If no bytes, return 0*/
a = open(filename, O_RDONLY);

if (a == -1)
return (0);

/*allocate a buffer of size letters, if no bytes are written, return 0*/
buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);

/*to read and store data in the buffer*/
filerd = read(a, buffer, letters);
filewr = write(STDOUT_FILENO, buffer, filerd);

close(a);

free(buffer);

return (filewr);
}
