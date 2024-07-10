#include "main.h"

/**
 * is_divisible - Helper function to check if a number is divisible
 * @n: The number to check divisibility against
 * @divisor: The current divisor to check
 *
 * Returns 1 if divisible, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
    if (divisor == 1)  /* Base case: 1 is always divisible */
        return 0;
    if (n % divisor == 0)
        return 1;  /* Number is divisible */
    return is_divisible(n, divisor - 1);  /* Check next divisor */
}

/**
 * is_prime_number - Checks if a number is a prime number (recursive version)
 * @n: The number to check
 *
 * Returns 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;  /* Numbers <= 1 are not prime */
    if (n <= 3)
        return 1;  /* 2 and 3 are prime numbers */

    /* Check divisibility starting from n-1 (excluding n) */
    return !is_divisible(n, n - 1);
}

