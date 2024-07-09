#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Function prototypes */
char *_strcat(char *dest, const char *src);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);  /* Prototype for _strstr function */

#endif /* MAIN_H */

