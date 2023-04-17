# 0x0D. C - Preprocessor

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded

## Resources
Read or watch:
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/cpp/Object-like-Macros.html)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/cpp/Macro-Arguments.html)
- [Pre Processor Directives in C](https://www.geeksforgeeks.org/preprocessor-directives-c/)
- [The C Preprocessor](https://www.youtube.com/watch?v=Z1ao6zDvBaY)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html)
- [include guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://www.ibm.com/docs/en/zos/2.4.0?topic=definitions-commonly-used-predefined-macros)

## Tasks
### 0. Object-like Macro
Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

### 1. Pi
Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

### 2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.

### 3. Function-like macro
Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

### 4. SUM
Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

### 5. Worst abuse of the C preprocessor (IOCCC winner, 1986)
Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.

