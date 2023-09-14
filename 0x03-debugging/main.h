#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
void positive_or_negative(int i);
int largest-number(int a, int b, int c);
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);
#endif /* MAIN_H */
