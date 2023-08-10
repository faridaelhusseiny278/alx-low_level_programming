#include <stdio.h>
/**
 * main- a program that prints the size of various types
 * Return: 0(Success)
 */
int main(void)
{
char x;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
int y;
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
long int z;
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
long long int a;
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
float b;
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
return (0);
}
