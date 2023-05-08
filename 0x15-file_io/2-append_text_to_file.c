#include "main.h"

/**
* append_text_to_file - a function for appending text
* @filename: a string file name.
* @text_content: a character string of content written in the file.
*
* Return: 1 else, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int a;
int tally;
int filewr;

/*to check if arguments is null*/
if (!filename)
return (-1);

/*to open the file for writing only*/
/*and append contents of text_content to the end*/
a = open(filename, O_WRONLY | O_APPEND);

/*if the open call fails*/
if (a == -1)
return (-1);

/*a loop to count number of letters*/
if (text_content)
{
for (tally = 0; text_content[tally]; tally++)
;
/*to write tally (number of bytes) to text_content (buffer)*/
filewr = write(a, text_content, tally);

if (filewr == -1)
return (-1);
}

close(a);

return (1);
}
