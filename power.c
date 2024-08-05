/* 
	Write a program that takes two integers, a base and an exponent, as input
	and calculates the power. Use the pow function from the math.h library.
*/

#include <stdio.h>
#include <math.h>
int main(){
	int base, exponent;
	printf("Enter the Base: ");
	scanf("%d", &base);
	printf("Enter the Exponent: ");
	scanf("%d", &exponent);
	int calc = pow(base, exponent);
	printf("The Result is: %d", calc);
	return 0;
}
