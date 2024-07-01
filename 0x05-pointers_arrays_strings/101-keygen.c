#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    /* Array to hold characters for password generation */
    char password[12];
    int i, sum, rand_char;

    srand(time(0));  /* Seed rand() with current time */

    sum = 0;
    i = 0;
    while (sum < 2772 - 122)  /* Adjust condition for password length */
    {
        rand_char = rand() % 62;  /* Generate a random number between 0 and 61 */

        /* Assign characters based on ASCII values */
        if (rand_char < 26)  /* Lowercase letters */
            password[i++] = 'a' + rand_char;
        else if (rand_char < 52)  /* Uppercase letters */
            password[i++] = 'A' + (rand_char - 26);
        else  /* Digits */
            password[i++] = '0' + (rand_char - 52);

        sum += password[i - 1];
    }
    password[i] = 2772 - sum;  /* Assign last character to meet checksum */

    printf("%s\n", password);

    return (0);
}

