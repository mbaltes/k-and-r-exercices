// A program that copies its input to its output replacing
// tab by \t
// backspace by \b
// and backslash by \\

#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      printf("\\t");
    } else if (c == '\b') { // Keyboard and system dependent.
      printf("\\b");
    } else if (c == '\\') {
      printf("\\\\");
    } else {
      putchar(c);
    }
  }
}
