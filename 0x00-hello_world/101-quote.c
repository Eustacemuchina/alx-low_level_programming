#include <unistd.h>
/**
 * main - this prints exactly the input on it
 * Return: always 1.
 */
int main(void)
{
	write(2, "and that place of art is useful\" - Dora Korpar, 2015-10-19\r", 59);
	return(1);
}
