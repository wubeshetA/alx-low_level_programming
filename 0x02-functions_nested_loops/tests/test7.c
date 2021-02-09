#include <stdio.h>
#include "../7-print_last_digit.c"
int main(void)
{
	int r;

   putchar('0'+print_last_digit(98));
    putchar('0'+print_last_digit(0));
    r = print_last_digit(-1024);
   putchar('0' + r);
   putchar('\n');
    return (0);
}
