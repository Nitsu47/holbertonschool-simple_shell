#include "shell.h"
/**
* main - Shell core
* Return:
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
        _EOF(&command);
    if (command[read - 1] == '\n')
        command[read - 1] = '\0';

    printf("%s\n", command);
}
free(command);
return (0);
}
