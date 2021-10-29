#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * infinite_while - entry point
 *
 * Return: 0
 */

int infinite_while(void)
{
	while (1)
		sleep(1);

	return (0);
}

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	pid_t child;
	int cant = 0;

	while (cant < 5)
	{
		child = fork();

		if (child == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", child);
		cant++;
	}

	infinite_while();

	return (0);
}