#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: - set to 0 program run successfully
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int %lu byte(s)\n", sizeof(d));
	printf("Size of a float %lu bytes(s)\n", sizeof(e));
return (0);
}
