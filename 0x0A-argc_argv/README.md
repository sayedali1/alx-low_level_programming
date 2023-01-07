# 0x0A. C - argc, argv `c`

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`

* All your files will be compiled on `Ubuntu 20.04` LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

* All your files should end with a new line

* Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`

* You are not allowed to use global variables

* No more than `5` functions per file

* You are not allowed to use the `standard library`. Any use of functions like `printf`, `puts`, etc… is forbidden

* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)

* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account

* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples

* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called `main.h`

* Don’t forget to push your header file

## what we should leard from these tasks

* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Tasks
| Tasks | Description |
| --- | --- |
| [0](/0x0A-argc_argv/0-whatsmyname.c) |  <details><summary>Write a program that prints its name, followed by a new line.</summary><ul><li>If yourename the program, it will print the new name, without having to compile it again<li>You should not remove the path before the name of the program |
| [1](/0x0A-argc_argv/1-args.c) | <details><summary>Write a program that prints the number of arguments passed into it.</summary><ul><li>Your program should print a number, followed by a new line |
| [2](/0x0A-argc_argv/2-args.c) | <details><summary>Write a program that prints all arguments it receives.</summary><ul><li>All arguments should be printed, including the first one<li>Only print one argument per line, ending with a new line |
| [3](/0x0A-argc_argv/3-mul.c) | <details><summary>Write a program that multiplies two numbers.</summary><ul><li>Your program should print the result of the multiplication, followed by a new line<li>You can assume that the two numbers and result of the multiplication can be stored in an integer<li>If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1` |
| [4](/0x0A-argc_argv/4-add.c) | <details><summary>Write a program that adds positive numbers.</summary><ul><li>Print the result, followed by a new line<li>If no number is passed to the program, print 0, followed by a new line<li>If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`<li>You can assume that numbers and the addition of all the numbers can be stored in an `int` |
| [5](/0x0A-argc_argv/100-change.c) | <details><summary>Write a program that prints the minimum number of coins to make change for an amount of money.</summary><ul><li>`Usage: ./change cents`<li>where `cents` is the amount of cents you need to give back<li>if the number of arguments passed to your program is not exactly `1`, print Error, followed by a new line, and return `1`<li>you should use `atoi` to parse the parameter passed to your program<li>If the number passed as the argument is negative, print `0`, followed by a new line<li>You can use an unlimited number of coins of values 25, `10`, `5`, `2`, and `1` cent |

## Author

* [sayed ali](https://github.com/sayedali1)
