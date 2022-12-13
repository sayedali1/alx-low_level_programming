#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c);

/**
*print_alphabet - print the alpha
*
*Return: always 0
*/
void print_alphabet(void);

/**
*print_alphabet_x10 - print alphabet 10 times
*return: void
*/

void print_alphabet_x10(void);

/**
*_islower - entry point check if c lower alpha or not
*
*@c: integar
*
*Return:  0 if not_lower, 1 if lower
*/
int _islower(int c);

/**
*_isalpha - entry point check if c  alpha or not
*
*@c: integar
*
*Return:   1 if alphabet, 0 otherwise
*/
int _isalpha(int c);

/**
*print_sign - check the sign og a number
*
*@n: int num
*
*Return: 1 if postive, 0 if zero, -1 if negative
*/
int print_sign(int n);

/**
*_abs - get the absolute value
*
*@a: int to return
*Return: absolute value
*/
int _abs(int a);

/**
*print_last_digit - get the last diger of num
*@int: int to return
*Return: the absolute of the last digit
*/
int print_last_digit(int);

#endif
