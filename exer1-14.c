/*
 * Exercise 1-14
 *
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 */
#include <stdio.h>

#define SIZE 128


void print_histogram(int length);


int main()
{
	int c;
	static int freq[SIZE];

	while ((c = getchar()) != EOF) {
		freq[(int)c]++;
	}

	printf("\n");
	for (int i = 0; i < SIZE; ++i) {
		if (freq[i] != 0) {
			printf("%c ", (char)i);
			print_histogram(freq[i]);
		}
	}
}


void print_histogram(int length)
{
	for (int i = 0; i < length; ++i) {
		printf("|");
	}
	printf("\n");
}
