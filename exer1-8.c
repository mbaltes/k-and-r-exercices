// A program to count blanks, tabs, and newlines.

#include <stdio.h>

int main() {
  int blanks = 0, tabs = 0, newlines = 0, c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == '\n') {
      ++newlines;
    }
  }
  printf("\n");
  printf("%2d, blanks\n", blanks);
  printf("%2d, tabs\n", tabs);
  printf("%2d, newlines\n", newlines);
}
