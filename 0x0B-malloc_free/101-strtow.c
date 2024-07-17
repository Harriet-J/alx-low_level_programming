#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words
 */
static int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, k, len, word_count;
	char *word_start;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		if (*str != ' ')
		{
			word_start = str;
			len = 0;
			while (*str != ' ' && *str != '\0')
			{
				len++;
				str++;
			}
			words[i] = malloc((len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				while (i >= 0)
				{
					free(words[i--]);
				}
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
			{
				words[i][k] = word_start[k];
			}
			words[i][len] = '\0';
			i++;
		}
		else
		{
			str++;
		}
	}
	words[i] = NULL;

	return (words);
}

