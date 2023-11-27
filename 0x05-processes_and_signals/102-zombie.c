#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - An infinite loop
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - The main function that creates 5 zombie processes
 */
int main(void)
{
	pid_t zombie;
	int idx;

	for (idx = 0; idx < 5; idx++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}
	infinite_while();
	return (1);
}
