#include "main.h"
/**
 * append_text_to_file - Function  Appends Text End File.
 * @filename: Pointer Name File.
 * @text_content:String Add End File.
 * Return: If the function fails or filename is NULL -1.
 *         If the file Does Not exist the user lacks write-1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, l = 0;

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (filename == NULL)
		return (-1);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
