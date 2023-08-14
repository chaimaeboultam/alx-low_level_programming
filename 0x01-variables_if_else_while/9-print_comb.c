#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int i;

    for (i = 1; i < 9; i++) {
        putchar(i + '0');
        putchar(',');
	putchar(' ');
    }
    putchar('9');
    return 0;
}
