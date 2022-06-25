#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _isupper(int c);
void *_memset(void *s, int c, unsigned int n);
char *strcat(char *dest, const char *src);
int _isdigit(int c);
void *_memcpy(void *dest, const void *src, unsigned int n);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);
unsigned int _strlen(const char *str);
char *_strncpy(char *dest, char *src, int n);
int _islower(int c);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *S, char *accept);
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _abs(int n);
char *_strcpy(char *dest, const char *src);
int atoi(char *s);

#endif
