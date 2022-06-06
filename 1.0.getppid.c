#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
pid_t getpid(void);
pid_t getppid(void);
printf("Process ID: %d\n", getpid());
printf("Parent Process ID: %d\n", getppid());
return (0);
}
