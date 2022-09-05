#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_len - Locates the idex marking of a word in a string
 * @str: the word
 *
 * Return: the index marking the end of the initial word
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the number of words contained within a string
 * @str: the string to be searched
 *
 * Return: the number of words contained within str
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: if fail NULL, else a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (!str || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (!strings)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
