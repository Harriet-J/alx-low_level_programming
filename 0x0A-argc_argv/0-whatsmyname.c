#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings representing command line arguments
 * 
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argc; /* Unused parameter */
    printf("%s\n", argv[0]);
    return (0);
}

