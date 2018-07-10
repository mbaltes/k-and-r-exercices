/*
 * Exercise 1-17
 *
 * Write a program to print all input lines that are
 * longer than 80 characters.
 */
#include <stdio.h>

#define MAXLINE  1000        /* maximum input line size */
#define MAXPRINT 80

int getline_me(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline_me(line, MAXLINE)) > 0) {
		if (len > MAXPRINT)
			printf("%s", line);
	}

	return 0;
}

int getline_me(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

