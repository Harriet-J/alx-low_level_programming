#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Function prototypes */
char *_strcat(char *dest, const char *src);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);  /* Prototype for _strstr function */
int _putchar(char c);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */

