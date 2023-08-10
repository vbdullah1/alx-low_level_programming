#include <stdio.h>
/**
 * main - 6-size.c
 * description - Entry pointt
 *
 * Return: always (0) (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(1)\n", sizeof(char));
	printf("Size of an int: %lu byte(8)\n", sizeof(int long));
	printf("Size of a long int: %lu byte(8)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(8)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(4)\n", sizeof(float));
	return (0);
}
