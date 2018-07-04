/*
 * Exercise 1-9
 *
 * Write a program to copy its input to its output, replacing each string of
 * one or more blanks by a single blank.
 */
#include <stdio.h>

int main()
{
	int c, d;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((d = getchar()) == ' ') {
				; // Skip extra blank characters.
			}
			putchar(c);
			putchar(d);
		} else {
			putchar(c);
		}
	}
}
