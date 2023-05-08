#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int x;
        ssize_t j, k;
        char *buf;

        if (filename == NULL)
                return (0);

        x = open(filename, O_RDONLY);
        if (x == -1)
                return (0);

        buf = malloc(sizeof(char) * letters);
        if (buf == NULL)
        {
                close(x);
                return (0);
        }

        j = read(x, buf, letters);
        if (j == -1)
        {
                free(buf);
                close(x);
                return (0);
        }

        k = write(STDOUT_FILENO, buf, j);
        if (k == -1 || k != j)
        {
                free(buf);
                close(x);
                return (0);
        }

        free(buf);
        close(x);
        return (k);
}
