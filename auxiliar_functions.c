#include "shell.h"
/**
* main - divide an array in tokens(arguments).
* Return: an array with each argument in the line.
*/
int _strtok(void)
{
char *buffer = malloc(1024);
char *token;
size_t leng = 1024;

while (1)
{
	printf("$ ");
	getline(&buffer, &leng, stdin);
	printf("%s", buffer);
}
token = strtok(buffer, "");

if (token == NULL)
{
	return (-1);
}
while (token)
{
	printf("%s", token);
	token = strtok(NULL, " ");
}
return (0);
}
/**
* tokenize - Splits a string
* @buffer:the pointer to input string
* @x: the delimiter for strtok
* Return: A pointer to an array of tokens.
**/
char **tokenize(char *buffer, const char *x)
{
char *token = NULL, **commands = NULL;
size_t bufsize = 0;
int i = 0;

if (buffer == NULL)
	return (NULL);

bufsize = _strlen(buffer);
commands = malloc((bufsize + 1) * sizeof(char *));
if (commands == NULL)
{
	perror("Unable to allocate buffer");
	free(buffer);
	free(commands);
	exit(EXIT_FAILURE);
}
token = strtok(buffer, x);
while (token != NULL)
{
	commands[i] = malloc(_strlen(token) + 1);
	if (commands[i] == NULL)
	{
		perror("Unable to allocate buffer");
		free(commands);
		return (NULL);
	}
	_strcpy(commands[i], token);
	token = strtok(NULL, x);
	i++;
}
	commands[i] = NULL;
	return (commands);
}
/**
* _EOF -  function checks if buffer is EOF
* @buffer: The pointer to the input string.
* Return: Nothing
**/
void _EOF(char *buffer)
{
if (*buffer)
{
	free(*buffer);
	*buffer = NULL;
}
if (isatty(STDIN_FILENO))
{
	printf("\n");
}
	exit(EXIT_SUCCESS);
}
