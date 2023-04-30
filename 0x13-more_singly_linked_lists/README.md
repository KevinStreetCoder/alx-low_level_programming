# 0x13. C - More singly linked lists

## Description

This project is about learning how to use singly linked lists in C programming language. By the end of the project, you should be able to explain to anyone, without the help of Google, how to use linked lists and start to look for the right source of information without too much help.

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- How to use linked lists
- Start to look for the right source of information without too much help
- Copyright - Plagiarism

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
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

### Resources

Read or watch:

- Google

## Project Timeline

- Weight: 1
- Project will start Apr 28, 2023 6:00 AM, must end by May 3, 2023 6:00 AM
- Checker was released at Apr 29, 2023 12:00 PM
- An auto review will be launched at the deadline

## Data structure

Please use this data structure for this project:

/**

struct listint_s - singly linked list
@n: integer
@next: points to the next node
Description: singly linked list node structure
*/
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

