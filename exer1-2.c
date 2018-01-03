#include <stdio.h>

int main() {
  printf("hello, ");
  printf("wor\cld"); // The \c produces an unknown escape sequence error.
  printf("\n");
}
