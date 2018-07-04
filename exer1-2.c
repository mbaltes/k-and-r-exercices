/*
 * Exercise 1-2
 *
 * Experiment to find out what happens when print's argument string contains
 * \c, where c is some character not listed above.
 */
#include <stdio.h>

int main()
{
	printf("hello, ");
	printf("wor\cld"); // The \c produces an unknown escape sequence warning.
	printf("\n");
}
