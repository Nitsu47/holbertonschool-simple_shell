#include "shell.h"
/**
* exec - Shell core.
* This function implements the core functionality of the custom shell.
* Reads input from the user, processes it, and executes the appropriate actions.
* It also handles end-of-file conditions and provides error messages.
* Return: Always returns 0 to indicate successful execution.
*/
int exec(void)
{
char *command = NULL;
size_t len = 1024;
ssize_t read;

while (1)
{
printf("$ ");
fflush(stdout);
read = getline(&command, &len, stdin);
if (read == -1)
{
perror("getline");
_EOF(&command);
}
if (read == 1 && command[0] == '\n')
{
_EOF(&command);
}
if (command[read - 1] == '\n')
{
command[read - 1] = '\0';
}
printf("%s\n", command);
}
free(command);
return (0);
}
