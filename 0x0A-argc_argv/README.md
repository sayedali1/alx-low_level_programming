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
| 0 |  <details><summary>Write a program that prints its name, followed by a new line.</summary><ul><li>If yourename the program, it will print the new name, without having to compile it again<li>You should not remove the path before the name of the program
```<br>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis <br>julien@ubuntu:~/0x0A. argc, argv$ ./mynameis./mynameis <br>julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis<br>julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis <br>./mynewnameis <br>julien@ubuntu:~/0x0A. argc, argv$```</details>|

<details><summary>task1</summary>
<p>

Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
```

</p>
</details>

<details><summary>task2</summary>
<p>

Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
```
</p>
</details>

<details><summary>task3</summary>
<p>
Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

``` 
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 

```

</p>
</details>

<details><summary>task4</summary>
<p>
Write a program that adds positive numbers.

* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
* You can assume that numbers and the addition of all the numbers can be stored in an `int`

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
```

</p>
</details>

<details><summary>task5</summary>
<p>

Write a program that prints the minimum number of coins to make change for an amount of money.

* `Usage: ./change cents`
* where `cents` is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly `1`, print Error, followed by a new line, and return `1`
* you should use `atoi` to parse the parameter passed to your program
* If the number passed as the argument is negative, print `0`, followed by a new line
You can use an unlimited number of coins of values 25, `10`, `5`, `2`, and `1` cent

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$ 

```

</p>
</details>

## Author

* [sayed ali](https://github.com/sayedali1)
