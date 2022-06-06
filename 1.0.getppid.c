#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{

  pid_t getpid();
  pid_t getppid();

  printf("Process ID: %d\n", getpid());

  printf("Parent Process ID: %d\n", getppid());
  return (0);
}
