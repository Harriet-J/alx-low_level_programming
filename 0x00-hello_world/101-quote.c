#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (indicating success)
 */
int main(void)
{
    /* Message to be printed */
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Using the write system call to print to stderr */
    /* Parameters: file descriptor for stderr (2), pointer to message, length of message */
    write(2, quote, 59);

    return (1); /* Return 1 to indicate success */
}

