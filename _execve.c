#include "shell.h"
/**
* _execve - executes commands passed.
* Return: executed command.
*/
int execve_(char *command, char **args)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
	if (execvp(args[0], args) == -1)
	{
		perror("Execution error");
		return (-1);
	}
}
else if (pid < 0)
{
	perror("Fork error");
	return (-1);
}
else
{
do
	waitpid(pid, &status, WUNTRACED);
while (!WIFEXITED(status));
}
return (1);
}
