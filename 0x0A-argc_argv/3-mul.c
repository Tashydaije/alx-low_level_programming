#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two nums
 * @argc: Argument count
 * @argv: Array of pointers
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int product = 0;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
