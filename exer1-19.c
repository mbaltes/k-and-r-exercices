/*
 * Exercise 1-19
 *
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */
#include <stdio.h>

#define MAXLINE  1000        /* maximum input line size */

void reverse(char a[], int len);
void swap(char a[], int l, int r);
void show_array(char a[], int len);
int getline_me(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline_me(line, MAXLINE)) > 0) {
		show_array(line, len);
		reverse(line, len);
		show_array(line, len);
	}

	return 0;
}

void reverse(char a[], int len)
{
	int left = 0;
	int right = len - 2;

	for (; left < (len-1) / 2 ;) {
		swap(a, left, right);
		left++;
		right--;
	}
}

void swap(char a[], int l, int r)
{
	char tmp = a[l];
	a[l] = a[r];
	a[r] = tmp;
}

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
