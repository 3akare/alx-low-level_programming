#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments count
 * @av: arguments vectors
 *
 * Return: NULL if fail, or a string
 */

char *argstostr(int ac, char **av)
{
	unsigned long int sum = 0, k = 0, i = 0, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (av[i] != NULL)
	{
		sum += strlen(av[i]);
		i++;
	}
	i = 0;
	str = malloc((sizeof(char) * sum) + (ac + 1));
	if (!str)
		return (NULL);
	while (av[i] != NULL)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
		i++;
	}
	return (str);
}

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}