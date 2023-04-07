# 0x0A. C - argc, argv

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## Resources
Read or watch:

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [how to compile with unused variables](https://stackoverflow.com/questions/1486904/how-to-declare-unused-function-arguments-in-c)

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library

## Tasks

### 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.

- Usage: `./a.out my_name_is_alice`
- Output: `my_name_is_alice`

### 1. Silence is argument carried out by other means
Write a program that prints the number of arguments passed into it.

- Usage: `./a.out hello`
- Output: `1`

- Usage: `./a.out "hello, world" 123`
- Output: `2`

### 2. The best argument against democracy is a five-minute conversation with the average voter
Write a program that prints all arguments it receives.

- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line

### 3. Neither irony nor sarcasm is argument
Write a program that multiplies two numbers.

- Usage: `./a.out 2 3`
- Output: `6`

### 4. To infinity and beyond
Write a program that adds positive numbers.

- Numbers can be preceded by a plus or minus sign
- If no number is passed, print `0`
- If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and exit with a status of `1`
- The result of the addition should be printed followed by a new line

### 5. Minimal Number of Coins for Change
Write a program that prints the minimum number of coins to make change for an amount of money.

- Usage: `./change cents`
- where `cents` is the amount of cents you need to give back
- if the number of arguments passed to your program is not exactly `1`,
