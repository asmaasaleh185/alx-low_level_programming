#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	fprintf(stderr, "size of a char: %u byte(s)\n", sizeof(a));
	fprintf(stderr, "size of an int: %u byte(s)\n", sizeof(b));
	fprintf(stderr, "size of a long int: %u byte(s)\n", sizeof(c));
	fprintf(stderr, "size of a long long int: %u byte(s)\n", sizeof(d));
	fprintf(stderr, "size of a float: %u byte(s)\n", sizeof(e));
	return (0);
}
