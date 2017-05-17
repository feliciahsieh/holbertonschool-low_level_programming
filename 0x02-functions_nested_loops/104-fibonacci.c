#include <stdio.h>

/**
 * main - find 1st 98 Fibonacci numbers
 *
 * Return: zero
 *
 */
int main(void)
{
        unsigned long int fib1 = 1, fib2 = 2, new;
        int i;

        printf("1, 2, ");

        for (i = 3; i <= 98; i++)
        {
                new = fib1 + fib2;

                printf("%lu", new);

                if (i < 98)
                {
                        printf(", ");
                }
                fib1 = fib2;
                fib2 = new;
        }
        printf("\n");

        return (0);
}
