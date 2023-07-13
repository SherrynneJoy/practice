#include <unistd.h>
#include <stdio.h>

/**
 * main - main entry point
 * Return: 0 when successful
 */

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
