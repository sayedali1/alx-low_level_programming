# 0x07. C - Even more pointers, arrays and strings

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

* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

## tasks

| tasks | Description |
| ---| --- |
| [0](/0x07-pointers_arrays_strings/0-memset.c) | Write a function that fills memory with a constant byte.<ul><li>The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b` <li>Returns a pointer to the memory area `s` |
| [1](/0x07-pointers_arrays_strings/1-memcpy.c) | Write a function that copies memory area.<ul><li>`The _memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`<li>Returns a pointer to `dest` |
| [2](/0x07-pointers_arrays_strings/2-strchr.c) | Write a function that locates a character in a string.<ul><li>Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found |
| [3](/0x07-pointers_arrays_strings/3-strspn.c) | Write a function that gets the length of a prefix substring.<ul><li>Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept` |
| [4](/0x07-pointers_arrays_strings/4-strpbrk.c) | Write a function that searches a string for any of a set of bytes.<ul><li>The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`<li>Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found |
| [5](/0x07-pointers_arrays_strings/5-strstr.c) | Write a function that locates a substring.<ul><li>The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes `(\0)` are not compared<li>Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found. |
| [6](/0x07-pointers_arrays_strings/7-print_chessboard.c) | Write a function that prints the chessboard. |
| [7](/0x07-pointers_arrays_strings/8-print_diagsums.c) | Write a function that prints the sum of the two diagonals of a square matrix of integers. |
| [8](/0x07-pointers_arrays_strings/100-set_string.c) | Write a function that sets the value of a pointer to a char. |

## Author

* [sayed ali](https://github.com/sayedali1)
