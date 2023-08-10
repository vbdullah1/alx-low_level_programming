#include <stdio.h>
/**
 * main - 6-size.c
 * description - Entry pointt
 *
 * Return: always (0) (success)
 */
int main(void)
{
	printf("size of a char: %lu byte(S)\n", sizeof(char));
	printf("size of an int: %lu byte(S)\n", sizeof(long int));
	printf("size of a long int: %lu byte(S)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(S)\n", sizeof(long long int));
	printf("size of a float: %lu byte(S)\n", sizeof(float));
	return (0);
}
