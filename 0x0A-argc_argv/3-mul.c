#include <stdio.h>
#include <stdlib.h>


/**
 * main-multiplies two numbers
 * @argc:number of arguments
 * @argv:array of string
 *
 * return: 0 always success
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;
	if(argc != 3)
	{
		printf("ERROR\n");
		return 1;
	}
	else
	{
		num1= atoi(arg[1]);
		num2= atoi(arg[2]);
		mul= num1 * num2;
		printf("%d\n", mul);
	}
	
	return (0);
}
