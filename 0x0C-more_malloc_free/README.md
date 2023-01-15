# 0x0C. C - More malloc, free `C` `Memory allocation`

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

* How to use the `exit` function
* What are the functions `calloc` and `realloc` from the standard library and how to use them

## Tasks

| Tasks | Describetion |
| --- | --- |
| [0](/0x0C-more_malloc_free/0-malloc_checked.c) | Write a function that allocates memory using malloc.<ul><li>if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98` |
| [1](/0x0C-more_malloc_free/1-string_nconcat.c) | <details><summary>Write a function that concatenates two strings.</summary> <ul><li>The returned pointer shall point to a newly allocated space in memory, which contains s1,,<li>followed by the first n bytes of s2, and null terminated<li>If the function fails, it should return NULL<li>If n is greater or equal to the length of s2 then use the entire string s2<li>if NULL is passed, treat it as an empty string
