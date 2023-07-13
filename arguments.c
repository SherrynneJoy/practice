#include <stdio.h>

/**
 * main -main entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 when sucessful
 */

int main(int argc, char *argv[])
{
	(void)argc;
	int i = 0;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
