#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (find_sqrt(n, 0));
}

/**
 * find_sqrt - helper function to find the square root
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root, or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (find_sqrt(n, i + 1));
}

