#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int num) {
int last_digit = num % 10;

printf("The last digit is: %d\n", last_digit);
return(last_digit);
}
