// Write a program to print reverse multiplication table of a given number n

#include <stdio.h>

int main(){
	int num;
	printf("Enter the multiplicaton table of desire number: ");
	scanf("%d", &num);
	
	for(int i=10; i>=1; i--)
		printf(" %d x %d = %d\n",num, i, num*i);
	
	return 0;
}

