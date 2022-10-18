#include  "main.h"
/**
*print_alphabet - prints the alphabet,in lowercase
*/

void print_alphabet(void)

{

int i;
for (i = 'a'; i <= 'z'; i++)

_putchar(i);

_putchar('\n');

}
#include "main.h"
/**
*print_alphabet_x10 - print 10x the alphabet in lower case
*/

void print_alphabet_x10(void)

{

int count = 0;
char j;

for (count++ <= 9)
{
for (j = 'a'; j <= 'z'; j++)

_putchar(j);

_putchar('\n');

}

}
