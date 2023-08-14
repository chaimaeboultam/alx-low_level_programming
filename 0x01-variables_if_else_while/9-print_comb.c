#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int i;

    for (i = 0; i < 9; i++) {
        putchar(i + '0');
        putchar(',');
	putchar(' ');
    }
    putchar('9');
    printf("\n");
    return 0;
}
