#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generate a random valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    int i, sum, random_char;

    srand(time(0)); // Seed for random number generation based on current time

    sum = 0;
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        random_char = rand() % 76 + 48; // ASCII range from '0' to 'z'
        if (random_char > 57 && random_char < 65)
            random_char += 7; // Skip non-alphabetic characters
        else if (random_char > 90 && random_char < 97)
            random_char += 6; // Skip non-alphabetic characters
        password[i] = (char) random_char;
        sum += random_char;
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

    // Adjust the sum to match the expected ASCII value sum
    sum = 2772 - sum;
    password[PASSWORD_LENGTH - 1] = (char) sum;

    printf("%s", password);

    return (0);
}

