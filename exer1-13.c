/*
 * Exercise 1-13
 *
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */
#include <stdio.h>

int main()
{
	int c, nword, word_length;
	nword = word_length = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n') {
			++nword;
			printf("%2d ", nword);
			for (int i = 0; i < word_length; ++i) {
				printf("|");
			}
			word_length = 0;
			printf("\n");
		} else {
			++word_length;
		}
	}
}
