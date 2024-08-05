/* Write a program to calculate the factorial of a given number using a for loop. */

#include <stdio.h>

int main(){
	int n = 6;
	int fact =1;
//	printf("Enter you desire fctorial number: ");
//	scanf("%d", n);
	
	for(int i =1; i<=n; i++){
		fact *= i;
	}
	printf("The factorial od %d is %d", n, fact);
	
	return 0;
}

