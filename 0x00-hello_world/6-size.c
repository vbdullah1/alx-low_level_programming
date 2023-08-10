#include <stdio.h>
/**
 * main - 6-size.c
 * description - Write a C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: always (0) (success);
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte (s)\n", sizeof(long long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
