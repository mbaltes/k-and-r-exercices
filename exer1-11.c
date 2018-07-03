/* Testing the word count program. */

#include <stdio.h>

#define IN  1 // Inside a word.
#define OUT 0 // Outside a word.

int main()
{
	int c, nl, nw, nc, state;
	nl = nw = nc = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("\n");
	printf("%d %d %d\n", nl, nw, nc);
}
