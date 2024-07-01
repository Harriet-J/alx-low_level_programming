#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10 // Adjusted to 10 based on typical requirements
#define SUM_MAGIC_NUMBER 2772

/**
 * main - Generate a random valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    int i, sum = 0, diff;

    srand(time(NULL)); // Seed for random number generation based on current time

    // Generate random characters for the password
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; // ASCII range from '!' to '~'
        sum += password[i];
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

    // Adjust the last character to ensure the sum matches SUM_MAGIC_NUMBER
    diff = SUM_MAGIC_NUMBER - sum;
    password[PASSWORD_LENGTH - 1] = (char) diff;

    // Print the generated password
    printf("%s\n", password);

    return (0);
}

