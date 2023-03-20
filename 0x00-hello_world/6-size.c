#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: - set to 0 program run successfully
 */
int main(void)
{

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
