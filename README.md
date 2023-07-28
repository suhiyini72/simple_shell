Using the Shell Betty linter for the C programming language, our team successfully finished a project.
A README file that describes the project is also available. The following is the description:
A straightforward UNIX command language interpreter called "hsh" can read commands from files or standard input and carry them out.
Here is how "hsh" functions:

1. It prints a prompt and waits for the user to issue a command.
2. A child process is created to verify the command.
3. It searches the PATH for aliases, built-ins, and locally executable programs.
4. The command, which takes arguments, takes the place of the child process.
5. Following the completion of the command, the program goes back to the parent process and prints the prompt once more.
6. At this point, the program is prepared to accept a new command.
7. The user can leave by pressing Ctrl-D or by typing "exit" (with or without a status).
8. "hsh" also functions in passive mode.

Please use this command to compile the program:
Command: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
