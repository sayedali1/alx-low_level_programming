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
| [1](/0x0C-more_malloc_free/1-string_nconcat.c) | <details><summary>Write a function that concatenates two strings.</summary> <ul><li>The returned pointer shall point to a newly allocated space in memory, which contains `s1`,,<li>followed by the first `n` bytes of `s2`, and `null` terminated<li>If the function fails, it should return `NULL`<li>If `n` is greater or equal to the length of `s2` then use the entire string `s2`<li>if `NULL` is passed, treat it as an empty string
| [2](/0x0C-more_malloc_free/2-calloc.c) | <details><summary>Write a function that allocates memory for an array, using `malloc`.</summary> <ul><li>The `_calloc` functionallocates memory for an array of `nmemb` of `size` bytes each and returns a pointer to the allocated memory.<li>The memory is set to zero<li>if `nmemb` or `size` is `0`, then `_calloc` returns `NULL`<li>If `malloc` fails, then `_calloc` returns `NULL`
| [3](/0x0C-more_malloc_free/3-array_range.c) | <details><summary>Write a function that creates an array of integers.</summary><ul><li>The array created should contain all the values from min (included) to max (included), ordered from `min` to `max`<li>Return: the pointer to the newly created array<li>If `min > max`, return `NULL`<li>If `malloc` fails, return `NULL` |
| [4](/0x0C-more_malloc_free/100-realloc.c) | Write a function that reallocates a memory block using `malloc` and `free` <details><summary> where `ptr` is a pointer to the memory previously allocated with a call to `malloc: malloc(old_size)`<li>`old_size` is the size, in bytes, of the allocated space for `ptr`<li>and `new_size` is the new size, in bytes of the new memory block<li>The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum
of the old and new sizes<li>If `new_size > old_size`, the “added” memory should not be initialized<li>If `new_size == old_size` do not do anything and return `ptr`<li>If ptr is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`<li>If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. <li>Return `NULL`<li>Don’t forget to free `ptr` when it makes sense

## Author

* [sayed ali](https://github.com/sayedali1)
