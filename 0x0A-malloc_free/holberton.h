#ifndef janky
#define janky

#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
#endif
