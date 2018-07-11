/*
 * Exercise 1-18
 *
 * Write a program to remove trailing blanks and tabs from each
 * line of input, and to delete entirely blank lines.
 */
#include <stdio.h>

#define MAXLINE  1000        /* maximum input line size */


void remove_whitespace(char line[], int len);
int getline_me(char line[], int maxline);
void show_array(char a[], int len);


int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline_me(line, MAXLINE)) > 0) {
		show_array(line, len);
		remove_whitespace(line, len);
		show_array(line, len);
	}

	return 0;
}

void remove_whitespace(char line[], int len)
{
	if (len == 1) {                /* line has only newline character */
		line[0] = '\0';
	}

	for (int i = len-1; i > 0; --i) {
		if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n')
			break;

		if (line[i] == '\t' || line[i] == ' ') {
			line[i] = '\n';
			line[i+1] = '\0';
		}
	}
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

/* Function to visualize the changes that remove_whitespace makes. */
void show_array(char a[], int len)
{
	for (int i = 0; i < len; i++) {
		if (a[i] == '\t') {
			printf("\\t");
		} else if (a[i] == ' ') {
			printf("\\s");
		} else if (a[i] == '\n') {
			printf("\\n");
		} else {
			printf("%c", a[i]);
		}
	}
	printf("\n");
}
