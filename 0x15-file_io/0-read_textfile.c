#include "main.h"

/**
 * read_textfile - check the code
 * @filename: file name
 * @letters: letters
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = open(filename, O_RDONLY);
	char *letter;
	ssize_t bread, bwrite;

	if (filename == NULL)
		return (0);

	if (fp == -1)
		return (0);

	letter = (char *)malloc(letters + 1);
	if (letter == NULL)
	{
		close(fp);
		return (0);
	}

	bread = read(fp, letter, letters);
	if (bread <= 0)
	{
		close(fp);
		free(letter);
		return (0);
	}

	letter[bread] = '\0';

	bwrite = write(STDOUT_FILENO, letter, bread);
	close(fp);

	if (bwrite != bread)
		return (0);

	return (bread);
}
