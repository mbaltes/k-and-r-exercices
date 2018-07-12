/*
 * Exercise 2-1
 *
 * Write a program to determine the ranges of char, short, int, and long
 * variables, both signed and unsigned, by printing appropriate values
 * from standard headers and by direct computation. Harder if you compute
 * them: determine the ranges of the various floating-point types.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>


unsigned char calc_uchar_max();
char calc_char_min();
char calc_char_max();

unsigned short calc_ushort_max();
short calc_short_min();
short calc_short_max();

unsigned int calc_uint_max();
int calc_int_min();
int calc_int_max();

unsigned long calc_ulong_max();
long calc_long_min();
long calc_long_max();

int main()
{
	printf("Data type sizes: (from headers)\n");
	printf("unsigned  char: from 0 to %d\n",    UCHAR_MAX);
	printf("signed    char: from %d to %d\n",   SCHAR_MIN, SCHAR_MAX);
	printf("unsigned short: from 0 to %d\n",    USHRT_MAX);
	printf("signed   short: from %d to %d\n",   SHRT_MIN, SHRT_MAX);
	printf("unsigned   int: from 0 to %u\n",    UINT_MAX);
	printf("signed     int: from %d to %d\n",   INT_MIN, INT_MAX);
	printf("unsigned  long: from 0 to %lu\n",   ULONG_MAX);
	printf("signed    long: from %ld to %ld\n", LONG_MIN, LONG_MAX);

	printf("\n");

	printf("Data type sizes: (from computation)\n");
	printf("unsigned  char: from 0 to %d\n",    calc_uchar_max());
	printf("signed    char: from %d to %d\n",   calc_char_min(), calc_char_max());
	printf("unsigned short: from 0 to %d\n",    calc_ushort_max());
	printf("signed   short: from %d to %d\n",   calc_short_min(), calc_short_max());
	printf("unsigned   int: from 0 to %u\n",    calc_uint_max());
	printf("signed     int: from %d to %d\n",   calc_int_min(), calc_int_max());
	//printf("unsigned  long: from 0 to %lu\n",   calc_ulong_max());
	//printf("signed    long: from %ld to %ld\n", calc_long_min(), calc_long_max());

	return 0;
}

unsigned char calc_uchar_max()
{
	unsigned char c = 1;

	while (c > 0) {
		if (++c == 0) {
			--c;
			break;
		} else {
			continue;
		}
	}

	return c;
}

char calc_char_min()
{
	char c = -1;

	while (c < 0) {
		if (--c > 0) {
			++c;
			break;
		} else {
			continue;
		}
	}

	return c;
}

char calc_char_max()
{
	char c = 1;

	while (c > 0) {
		if (++c < 0) {
			--c;
			break;
		} else {
			continue;
		}
	}

	return c;
}

unsigned short calc_ushort_max()
{
	unsigned short s = 1;

	while (s > 0) {
		if (++s == 0) {
			--s;
			break;
		} else {
			continue;
		}
	}

	return s;
}

short calc_short_min()
{
	short s = -1;

	while (s < 0) {
		if (--s > 0) {
			++s;
			break;
		} else {
			continue;
		}
	}

	return s;
}

short calc_short_max()
{
	short s = 1;

	while (s > 0) {
		if (++s < 0) {
			--s;
			break;
		} else {
			continue;
		}
	}

	return s;
}

unsigned int calc_uint_max()
{
	unsigned int i = 1;

	while (i > 0) {
		if (++i == 0) {
			--i;
			break;
		} else {
			continue;
		}
	}

	return i;
}

int calc_int_min()
{
	int i = -1;

	while (i < 0) {
		if (--i > 0) {
			++i;
			break;
		} else {
			continue;
		}
	}

	return i;
}

int calc_int_max()
{
	int i = 1;

	while (i > 0) {
		if (++i < 0) {
			--i;
			break;
		} else {
			continue;
		}
	}

	return i;
}

unsigned long calc_ulong_max()
{
	unsigned long l = 1;

	while (l > 0) {
		if (++l == 0) {
			--l;
			break;
		} else {
			continue;
		}
	}

	return l;
}

long calc_long_min()
{
	long l = -1;

	while (l < 0) {
		if (--l > 0) {
			++l;
			break;
		} else {
			continue;
		}
	}

	return l;
}

long calc_long_max()
{
	long l = 1;

	while (l > 0) {
		if (++l < 0) {
			--l;
			break;
		} else {
			continue;
		}
	}

	return l;
}

