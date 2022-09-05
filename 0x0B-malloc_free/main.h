#ifndef MAIN_H
#define MAIN_H

void free_grid(int **grid, int height);
char *create_array(unsigned int size, char c);
char *_strdnup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

#endif
