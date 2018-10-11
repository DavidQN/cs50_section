## Compiling a simple C program

##### [Source for the example below.](http://www.network-theory.co.uk/docs/gccintro/gccintro_9.html)

Let us create a classic program in C that prints out "Hello World". Here is the souce code for our version of the program:

```c
#include <stdio.h>

int main (void)
{
  printf ("Hello, world!\n");
  return 0;
}
```

We will assume that the source code is stored in a file called ‘hello.c’. To compile the file ‘hello.c’ with clang, use the following command

```shell
clang -o hello hello.c
```

This compiles the source code in ‘hello.c’ to machine code and stores it in an executable file ‘hello’. The output file for the machine code is specified using the -o option. This option is usually given as the first argument on the command line. If it is omitted, the output is written to a default file called ‘a.out’.

Note that if a file with the same name as the executable file already exists in the current directory it will be overwritten.

To run the program, type the path name of the executable like this:

```shell
./hello
```

Which should output in the terminal

```
Hello, world!
```
