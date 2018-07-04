/*
 * Exercise 1-6
 *
 * Verify that the expression getchar() != EOF is 0 or 1.
 */
#include <stdio.h>

int main()
{
	int c;
	c = getchar() != EOF; // Ctrl-D is EOF input, makes c = 0
	printf("%i\n", c);
}
