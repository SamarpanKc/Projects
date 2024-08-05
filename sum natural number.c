// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main(){
	int n = 1;
	int sum = 0;
	
/*	while(n<=10){
		sum += n;
		n++;
	}
	
	do{
		sum+=n;
		n++;
	}while(n<=10);
*/
	
	for(n=0; n<=10; n++)
	sum += n;
	
	printf("The first 10 natural number is %d.", sum);
	return 0;
}

