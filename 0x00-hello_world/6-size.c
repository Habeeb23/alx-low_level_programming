#include "unistd.h"
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	
	print("Size of a char: %i byte(s)\n", sizeof(char));
	print("Size of an int: %i byte(s)\n", sizeof(int));
	print("Size of a long int: %i byte(s)\n", sizeof(long int));
	print("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
	print("Size of a float: %ibyte(s)\n", sizeof(float));
	return (0);
}	
