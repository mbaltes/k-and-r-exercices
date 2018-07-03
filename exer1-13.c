/*
 * This program prints a histogram of the lengths of the words
 * in its input.
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
