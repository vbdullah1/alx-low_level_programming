#include <stdio.h>
/**
 * main - 6-size.c
 * description - Entry pointt
 *
 * Return: always (0) (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\1", sizeof(char));
	printf("Size of an int: %lu byte(s)\8", sizeof(int long));
	printf("Size of a long int: %lu byte(s)\8", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\8", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\4", sizeof(float));
	return (0);
}
