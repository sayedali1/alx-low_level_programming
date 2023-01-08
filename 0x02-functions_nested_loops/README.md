# 0x02. C - Functions, nested loops `c` 
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

* What are nested loops and how to use them

* What is a function and how do you use functions

* What is the difference between a declaration and a definition of a function

* What is a prototype

* Scope of variables

* What are the `gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89`

* What are header files and how to to use them with `#include`

## Tasks

| Tasks | Description |
| -- | -- |
| [0](/0x02-functions_nested_loops/0-putchar.c) | Write a program that prints _putchar, followed by a new line<ul><li>The program should return `0` |
| [1](/0x02-functions_nested_loops/1-alphabet.c) | Write a function that prints the alphabet, in lowercase, followed by a new line.<ul><li>You can only use `_putchar` twice in your code |
| [2](/0x02-functions_nested_loops/2-print_alphabet_x10.c) | Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.<ul><li>You can only use `_putchar` twice in your code |
| [3](/0x02-functions_nested_loops/3-islower.c) | Write a function that checks for lower case character<ul><li>Returns `1` if c is lowercase<li>Returns `0` otherwise |
| [4](/0x02-functions_nested_loops/4-isalpha.c) | Write a function that checks for alphabetic character.<ul><li>Returns `1` if c is a letter, lowercase or uppercase<li>Returns `0` otherwise
| [5](/0x02-functions_nested_loops/5-sign.c) | Write a function that prints the sign of a number.<ul><li>Returns 1 and prints + if n is greater than zero<li>Returns `0` and prints `0` if `n` is zero<li>Returns `-1` and prints `-` if `n` is less than zero |
| [6](/0x02-functions_nested_loops/6-abs.c) | Write a function that computes the absolute value of an integer. |
| [7](/0x02-functions_nested_loops/7-print_last_digit.c) | Write a function that prints the last digit of a number. |
| [8](/0x02-functions_nested_loops/8-24_hours.c) | Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. |
| [9](/0x02-functions_nested_loops/9-times_table.c) | Write a function that prints the 9 times table, starting with 0. (see example) |
| [10](/0x02-functions_nested_loops/10-add.c) | Write a function that adds two integers and returns the result. |
| [11](/0x02-functions_nested_loops/11-print_to_98.c) | Write a function that prints all natural numbers from `n` to `98`, followed by a new line<ul><li>Numbers must be separated by a comma, followed by a space<li>Numbers should be printed in order<li>The first printed number should be the number passed to your function<li>The last printed number should be `98`<li>You are allowed to use the standard library |
| [12](/0x02-functions_nested_loops/100-times_table.c) | If `n` is greater than `15` or less than `0` the function should not print anything(see example) |
| [13](/0x02-functions_nested_loops/101-natural.c) | If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line. |

