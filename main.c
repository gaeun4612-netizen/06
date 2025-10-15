#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printstar(int N)
{
	int i;
	for (i=0;i<N;i++)
	 printf("*");
}

int main(int argc, char *argv[]) {
	int i;
	printstar(10);
	printstar(10);
	printstar(10);
	return 0;
}
