# 0x06. C - More pointers, arrays and strings

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

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Tasks

| [0](/0x06-pointers_arrays_strings/0-strcat.c) | Write a function that concatenates two strings.<ul><li>This function appends the `src` string to the dest string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte<li>Returns a pointer to the resulting string dest |
| [1](/0x06-pointers_arrays_strings/1-strncat.c) | Write a function that concatenates two strings. |
| [2](/0x06-pointers_arrays_strings/2-strncpy.c) | Write a function that copies a string |
| [3](/0x06-pointers_arrays_strings/3-strcmp.c) | Write a function that compares two strings. |
| [4](/0x06-pointers_arrays_strings/4-rev_array.c)|Write a function that reverses the content of an array of integers|
| [5](/0x06-pointers_arrays_strings/5-string_toupper.c) | Write a function that changes all lowercase letters of a string to uppercase |
| [6](/0x06-pointers_arrays_strings/6-cap_string.c) | Write a function that capitalizes all words of a string.<ul><li>Separators of words: `space`, `tabulation`, `new line`, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}` |
| [7](/0x06-pointers_arrays_strings/7-leet.c) | Write a function that encodes a string into 1337.<ul><li>Letters `a` and `A` should be replaced by `4`<li>Letters `e` and `E` should be replaced by `3`<li>Letters `o` and `O` should be replaced by `0`<li>Letters `t` and `T` should be replaced by `7`<li>Letters `l` and `L` should be replaced by `1` |
| [8](/0x06-pointers_arrays_strings/100-rot13.c) | Write a function that encodes a string using rot13.<ul><li>You can only use `if` statement once in your code<li>You can only use `two loops` in your code<li>You are not allowed to use `switch`<li>You are not allowed to use any ternary operation |
| [9](/0x06-pointers_arrays_strings/101-print_number.c) | Write a function that prints an integer.<ul><li>You can only use `_putchar` function to print<li>You are not allowed to use long<li>You are not allowed to use arrays or pointers<li>You are not allowed to hard-code special values |
| [10](/0x06-pointers_arrays_strings/102-magic.c) | prints `a[2] = 98`, followed by a new line.<ul><li>You are not allowed to use the variable `a` in your new line of code<li>You are not allowed to modify the variable `p`<li>You can only write one statement<li>You are not allowed to use `,`<li>You are not allowed to code anything else than the line of expected line of code at the expected line<li>Your code should be written at `line 19`, before the `;`<li>Do not remove anything from the initial code (not even the comments)and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)<li>You are allowed to use the standard library |

## Author

* [sayed ali](https://github.com/sayedali1)
