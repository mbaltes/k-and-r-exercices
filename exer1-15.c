/*
 * Exercise 1-15
 *
 * Rewrite the temperature conversion program of section 1.2 to use a function
 * for conversion.
 */
#include <stdio.h>

float fah_to_cel(float fah);

int main()
{
	float fahr, lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	/* Adding header to table. */
	printf("Fahren : Celsius\n");

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f\t%6.1f\n", fahr, fah_to_cel(fahr));
		fahr = fahr + step;
	}
}


float fah_to_cel(float fah)
{
	return (5.0/9.0) * (fah-32.0);
}
