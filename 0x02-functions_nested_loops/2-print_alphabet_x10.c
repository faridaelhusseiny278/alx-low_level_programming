#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alphabet;
int i;
i=0;
for (i =0 ; i< 10 ; i++)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');
}


}

