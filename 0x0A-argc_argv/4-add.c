#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of two positive numbers
 * @argc: Argument count
 * @argv: Array of pointers
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int count;

	sum = 0;
	count = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
