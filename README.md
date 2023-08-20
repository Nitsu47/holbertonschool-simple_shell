<div align="center">

![Simple shell](https://github.com/Nitsu47/holbertonschool-simple_shell/assets/135637506/c2887a0c-31a4-4519-8271-07f8ec3356f4)

<h1> Simple Shell </h1>

> This repository contains the C - Simple Shell project for Holberton School Uruguay.

</div>

<div align="center">

![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png)

</div>

<br>

## Table of contents
* [Introduction](#introduction)
* [Tasks](#tasks)
* [Requirements](#requirements)
* [Files](#files)
* [Usage](#usage)
* [Authors](#authors)

## Introduction
The project its about construct our own Simple Shell to learn a get deeper into C lenguage. This objective is given us by Holberton School as our second pair programming and most important project of the first trimester.

<details>
<summary><h2>Tasks</h2></summary>

0. README, man, AUTHORS
* Write a README
* Write a man for your shell.
* You should have an AUTHORS file at the root of your repository, listing all
* individuals having contributed content to the repository. Format, see Docker

1. Betty would be proud
* Write a beautiful code that passes the Betty checks

2. Simple shell 0.1
Write a UNIX command line interpreter.

* Usage: simple_shell
Your Shell should:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* You have to handle the “end of file” condition (Ctrl+D)

You don’t have to:

* use the PATH
* implement built-ins
* handle special characters : ", ', `, \, *, &, #
* be able to move the cursor
* handle commands with arguments
execve will be the core part of your Shell, don’t forget to pass the environ to it…

3. Simple shell 0.2
Simple shell 0.1 +

* Handle command lines with arguments

4. Simple shell 0.3
Simple shell 0.2 +

* Handle the PATH
* fork must not be called if the command doesn’t exist

5. Simple shell 0.4
Simple shell 0.3 +

* Implement the exit built-in, that exits the shell
* Usage: exit
* You don’t have to handle any argument to the built-in exit

6. Simple shell 1.0
Simple shell 0.4 +

* Implement the env built-in, that prints the current environment
</details>

<details>
<summary><h2>Resources</h2></summary>>

* <a href="https://intranet.hbtn.io/concepts/881" target="blank">Approaching a Project</a>
* <a href="https://intranet.hbtn.io/concepts/900" target="blank">Everything you need to know to start coding your own shell</a>
* <a href="https://en.wikipedia.org/wiki/Unix_shell" target="blank">Unix Shell</a>
* <a href="https://en.wikipedia.org/wiki/Thompson_shell" target="blank">Thompson Shell</a>
* <a href="https://en.wikipedia.org/wiki/Ken_Thompson" target="blank">Ken Thompson</a>
</details>

<details><summary><h2>Requirements</h2></summary>
<h3>General Requirements</h3>
        
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to (why?)
<h3></h3>


<h3>Compilation</h3>
* gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o hsh
</details>

<details>
<summary><h2>Files</h2></summary>
        
## Files
|Files|
|---|
|[shell.c](#shell.c)|
|[shell.h](#shell.h)|
|[_execve.c](#_execve.c)|
|[string_functions.c](#string_functions.c)|
|[auxiliar_functions.c](#auxiliar_functions.c)|

<a name="shell.c"></a>
<h3><a href="https://github.com/Nitsu47/holbertonschool-simple_shell/blob/main/shell.c">shell.c</a></h3>
Main code of the shell project, prints the prompt "$ " and take the arguments given by user in the same line.
<a name="shell.h"></a>
<h3><a href="https://github.com/Nitsu47/holbertonschool-simple_shell/blob/master/shell.h">shell.h</a></h3>
Contains the libraries, prototypes and headers macros needed for the files.
<a name="_execve.c"></a>
<h3><a href="https://github.com/Nitsu47/holbertonschool-simple_shell/blob/master/_execve.c">_execve.c</a></h3>
Own version of execve function, this function takes the arguments and executes the command passed.
<a name="string_functions.c"></a>
<h3><a href="https://github.com/Nitsu47/holbertonschool-simple_shell/blob/master/string_functions.c">string_functions.c</a></h3>
This file contains our own versions of some necessary functions, "_strlen"(returns the lenght of the string), "print_env"(prints the current environment variable), "_strcmp"(compare two strings) and "_strcpy"(copies a string to another string).
<a name="auxiliar_functions.c"></a>
<h3><a href="https://github.com/Nitsu47/holbertonschool-simple_shell/blob/master/auxiliar_functions.c">auxiliar_functions.c</a></h3>
Contains 3 needed functions, "tokenize"(that splits a string), "eof"(checks if buffer is end od the line) and "strtok"(divide an array in tokens(arguments)).
</details>

<details>
<summary><h2>Usage</h2></summary>
<details><summary><h3>Flowchart</h3></summary>
![Shell flow drawio](https://github.com/Nitsu47/holbertonschool-simple_shell-test/assets/135637506/448e3510-25ad-4a6c-b1ba-78e0e7e7ef7e)
</details>
<h3></h3>
        
Installation

- Clone this repository in your terminal: `git clone "https://github.com/Nitsu47/holbertonschool-simple_shell"`
- Go into the repository: `cd holbertonschool-simple_shell`
- Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

<h3>Example</h3>

Input:
```
$ ls -l
```
Output:
```
-rw-r--r-- 1 root root  145 Aug 19 21:33 AUTHORS.txt
-rw-r--r-- 1 root root 6849 Aug 19 22:19 README.md
-rw-r--r-- 1 root root  501 Aug 20 02:05 _execve.c
-rw-r--r-- 1 root root 1641 Aug 19 22:07 auxiliar_functions.c
-rw-r--r-- 1 root root  553 Aug 19 22:14 shell.c
-rw-r--r-- 1 root root  576 Aug 19 22:15 shell.h
-rw-r--r-- 1 root root 1027 Aug 19 21:38 string_functions.c
```

</details>

<div align="center">

## Authors
  
&ensp;[<img src="https://img.shields.io/badge/Nitsu47-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/Nitsu47)
&ensp;[<img src="https://img.shields.io/badge/Diego29012-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/Diego29012)
<br>

![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png)

<br>

Last updated: August 19, 2023
