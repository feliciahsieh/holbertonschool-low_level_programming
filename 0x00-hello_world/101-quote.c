#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char myStr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, myStr, sizeof(myStr) - 1);

	return (1);
}
