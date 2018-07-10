/*
 * Exercise 1-16
 *
 * Revise the main routine of the longest-line program so it will correctly
 * print the length of arbitrarily long input lines, and as much as possible
 * of the text.
 */
#include <stdio.h>

#define MAXLINE 1000        /* maximum input line size */

int getline_me(char line[], int maxline);
void copy(char to[], char from[]);
void print_len_and_begin(char l[], int len);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline_me(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		print_len_and_begin(line, len);
	}
	if (max > 0)
		printf("%s", longest);

	return 0;
}


void print_len_and_begin(char l[], int len)
{
	int max = 80;

	if (len > max)
		printf("%d %.*s...\n", len, max-3, l);
	else
		printf("%d %s", len, l);
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


void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
