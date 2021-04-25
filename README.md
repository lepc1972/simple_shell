# Simple Shell
## _Building a shell_

![N|Solid](https://blog.carreralinux.com.ar/wp-content/uploads/2016/12/shell-scripts-en-linux.png)

## Description
This repository contains a team project made by Holberton School students. Here you are going to find a simple UNIX command interpreter (a shell), written in C language. With this interpreter, you can read command lines, interpret them, run them, print the environment of the shell, and exit it.

### Files description
- **shell.h**
Header file that contains the libraries, the prototypes of all functions and the global variable environ.
- **main.c**
It contains a call to the shell_loop function to use it.
- **shell_loop.c**
Function that creates an infinite loop and displays the prompt of the simple shell, where the user can write the command lines and the shell executes them. The file calls 3 different functions.
- **function_getline.c**
This function gets the command line introduced by the user using `getline`
- **function_arguments.c**
The function splits the command line into tokens using `strtok`
- **execute_command.c**
This function executes all the commands in interactive or non-interactive mode, using the root or the executable file of the command (see usage -output on this file for more info). The function includes the `exit` built-in function and the `env`, where the environment variables are stored.
- **aux_functions.c**
The file includes 4 auxiliar functions. *_strcmp* to compare 2 strings,  *_strlen* to know the length of a string, *_strncat* to concatenate 2 strings, and *_printf* to print characters, strings or numbers.
- **_putchar.c**
Function that writes a character to stdout.
- **printf_functions.c**
The file includes 3 auxiliar functions to the _printf function. *print_string* to write strings, *print_character* to write a character, and *print_integer* to write digits.
- **man_1_simple_shell**
This file contains the manual pages of the simple shell. *Usage*: `man ./man_1_simple_shell`
- **AUTHORS**
The file contains a list of all individuals having contributed content to the repository in Docker format.

## Features
The simple shell has the exact same output as `sh (/bin/sh)` as well as the exact same error output. For more info type **man sh** in your terminal or run **sh**. The sh and the simple shell have an **interactive mode** (when you run the shell first and then give it the command lines) and a **non-interactive mode** (when the user give the command lines and runs the shell at the same time, in this mode the user can run one command at a time and the shell doesn't stay running).
- [man sh](https://www.man7.org/linux/man-pages/man1/sh.1p.html) to learn more.

### Usage

#### 0. Output
- Output in interactive mode.
The simple shell works like this in interactive mode:
```
$ ./hsh
$ /bin/ls
hsh main.c shell_loop.c shell.h
$
$ exit
```
- The shell also works by calling the executable file of the command instead of the root. See the example in interactive mode below:
```
$ ./hsh
$ ls
hsh main.c shell_loop.c shell.h
$
$ exit
```
- The simple shell works in non-interactive mode as well and the output looks like this:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell_loop.c shell.h
```
- The output in non-interactive mode by calling the executable file:
```
$ echo "ls" | ./hsh
hsh main.c shell_loop.c shell.h
```
#### 1. Error message
 As with the output, there are 2 possibilities with the error messages.
  - In interactive mode the error message looks like this:
  ```
  $ ./hsh
  $ qwerty
  hsh: 1: qwerty: not found
  $
  ```
  - In non-interactive mode like this:
  ```
  $ echo "qwerty" | ./hsh
  ./hsh: 1: qwerty: not found
  ```
  #### 2. Commands
  Below you will find a list of some commands to run in the simple shell.
  - **ls**
  command to list information about the FILEs in the current directory.
  *Usage:* `ls` or `/bin/ls`
  This command takes arguments. Example: `ls -l`
  - **pwd**
  This command prints the name of current/working directory
  *Usage:* `pwd`
  - **cat**
  Command that concatenates files and prints on the standard output.
  *usage:* `cat` filename
  - **cp**
  This command copies files.
  *Usage:* `cp` sourcefile destfile
  - **rm**
  Command that removes files
  *Usage:* `rm` filemane
  - **exit**
  Function that causes normal process termination.
  *Usage:* `exit`
  - **env**
  Function that runs a program in a modified environment
  *Usage:* `env`
  - **EOF**
   Indicator or flag that there is no more information to retrieve from a data source.
   *Usage:* `Ctrl + d`

   ### Used functions and sys calls

   | Function/ sys call | For help |
   | ------ | ------ |
   | `access` | [man 2 access](https://www.man7.org/linux/man-pages/man2/access.2.html) |
   | `execve` | [man 2 execve](https://www.man7.org/linux/man-pages/man2/execve.2.html) |
   | `exit` | [man 3 exit](https://www.man7.org/linux/man-pages/man3/exit.3.html) |
   | `fork` | [man 2 fork](https://www.man7.org/linux/man-pages/man2/fork.2.html) |
   | `free` | [man 3 free](https://linux.die.net/man/3/free) |
   | `getline` | [man 3 getline](https://www.man7.org/linux/man-pages/man3/getline.3.html) |
   | `isatty` | [man 3 isatty](https://man7.org/linux/man-pages/man3/isatty.3.html) |
   | `strtok` | [man 3 strtok](https://man7.org/linux/man-pages/man3/strtok.3.html) |
   | `wait` | [man 2 wait](https://man7.org/linux/man-pages/man2/wait.2.html) |
   | `write` | [man 2 write](https://man7.org/linux/man-pages/man2/write.2.html) |

   ## Installation
   To install and run the simple shell in your machine, clone this repository and compile all the .c files as shown below:
   - Link to clone : https://github.com/Carolinacapote/simple_shell.git
   - Compile like this: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

   ## Support and Authors
   Type `man ./man_1_simple_shell` in your terminal to display the manual pages of the simple shell, or you can also contact the authors of the repository via e-mail.
   :computer:
   | Name | E-mail adress | GitHub username |
   | ------ | ------ | ------ |
   | Carolina Capote | 2621@holbertonschool.com | [Carolinacapote](https://github.com/Carolinacapote) |
   | Luis Eduardo Pacheco | 2645@holbertonschool.com | [lepc7219](https://github.com/lepc7219) |
   | Juan David Tuta | 2753@holbertonschool.com | [Juand0145](https://github.com/Juand0145) |
