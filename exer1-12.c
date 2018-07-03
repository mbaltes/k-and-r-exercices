/* This program prints its input one word per line. */

#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			printf("\n");
			c = 0;
		}
		putchar(c);
	}
}
