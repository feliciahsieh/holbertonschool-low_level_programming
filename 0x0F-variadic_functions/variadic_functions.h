#ifndef VARFUN
#define VARFUN

/**
 * struct myPrint - mapping table for print type and function to call
 * @prType: print type
 * @f: function to call when print type detected
 */
typedef struct myPrint
{
	char prType;
	void (*f)();
} myPrint_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
