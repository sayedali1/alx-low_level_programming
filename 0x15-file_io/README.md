# 0x15. C - File I/O `C ``Syscall`

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

* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called `lists.h`

* Don’t forget to push your header file

## what we should leard from these tasks

* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

## Tasks

| Tasks | Description |
| --- | --- |
| [0](/0x15-file_io/0-read_textfile.c) | Write a function that reads a text file and prints it to the POSIX standard output. |
| [1](/0x15-file_io/1-create_file.c) | Create a function that creates a file. |
| [2](/0x15-file_io/2-append_text_to_file.c) | Write a function that appends text at the end of a file. |
| [3](/0x15-file_io/3-cp.c) | Write a program that copies the content of a file to another file. |

## Author

* [sayed ali](https://github.com/sayedali1)
