#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: - set to 0 program run successfully
 */
int main(void)
{

	printf("Size of a char: %lu 1 byte(s)\n", sizeof(char));
	printf("Size of an int: %lu 4 byte(s)\n", sizeof(int));
	printf("Size of a long int %lu 4 byte(s)\n", sizeof(long int));
	printf("Size of a long long int %lu 8 byte(s)\n", sizeof(long long int));
	printf("Size of a float %lu 4 bytes(s)\n", sizeof(float));
return (0);
}
