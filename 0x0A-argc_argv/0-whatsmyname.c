#include <stdio.h>

/**
 * main - this  function is used to print the name of the program.
 * @argc : the number of arguments
 * @argv : array of strings
 *
 * return (0) succes.
 */

int main(int argc __attribute__((unused)),char *argv[])
{
	printf("%s\n",*argv);
return 0;
}
