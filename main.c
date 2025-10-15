#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int factorial (int n){
	int res= 1;
	int i;
	
	for (i=1;i<n+1;i+=1)
	 res*=i;
	 
	return res;
}

int combination (int n, int r){
	
	return factorial(n)/(factorial(n-r) * factorial(r)) ;
	 
}

int main(int argc, char *argv[]) {
	
	//variable declare
	int n;
	int r;
	int res;
	
	//input data
	printf("Input n and r: ");
	scanf("%d %d", &n, &r);
	
	
	//compute combination
	res=combination (n,r);
	
	//print result
	printf("combination result is : %i\n", res);

	return 0;
}
