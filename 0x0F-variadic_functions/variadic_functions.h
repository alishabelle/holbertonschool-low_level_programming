#ifndef funky
#define funky
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

struct funct
{
	char s;
	void (*f)();
};
#endif
