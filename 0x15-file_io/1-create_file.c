#include "main.h"

/**
* create_file - a function for creating files
* @filename: a string file name.
* @text_content: a character string of content written in the file.
*
* Return: 1 else, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int a;
int tally;
int filewr;

/*to check if arguments is null*/
if (!filename)
return (-1);
/*to open the file, create it if it doesn’t exist,*/
/*open for writing only &*/
/*truncate to zero length if it already exists. */
/*0600 gives read & write permissions to owner only*/
a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
/*if open call fails*/
if (a == -1)
return (-1);
/*if text_content argument is null, set to an empty string*/
if (!text_content)
text_content = "";
/*a loop to count number of letters*/
for (tally = 0; text_content[tally]; tally++)
;
/*to write the contents*/
filewr = write(a, text_content, tally);

if (filewr == -1)
return (-1);

close(a);

return (1);
}
