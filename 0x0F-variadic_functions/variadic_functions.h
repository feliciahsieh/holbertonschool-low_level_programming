#ifndef VARFUN
#define VARFUN

typedef struct myPrint
{
	char *myPrintType;
	void (*f)(...);
};
typedef struct myPrint myPrint_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
