#include <stdio.h>

int main() {
  float fahr, celsius, lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  // Adding header to table.
  printf("Celsius : Fahren\n"); // Switching to C -> F

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%6.1f\t%3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }
}