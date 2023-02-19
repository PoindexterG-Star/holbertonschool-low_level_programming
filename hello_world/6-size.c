#include <stdio.h>
/**
 * main - Print the size of some data types
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %lu ", sizeof(char), "byte(s)");
	printf("Size of an int: %lu ", sizeof(int), "byte(s)");
	printf("Size of a long int: %lu ", sizeof(long int), "byte(s)");
	printf("Size of a long long int: %lu ", sizeof(long long int), "byte(s)");
	printf("Size of float: %lu ", sizeof(float), "byte(s)");
	return (0);
}
