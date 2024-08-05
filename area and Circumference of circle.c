// WAP to find the square and square root of an input number.

#include <stdio.h>
#include <math.h>
int main(){
	float num;
	printf("Enter a Number: ");
	scanf("%f", &num);
	float result = pow(num, 2);
	printf("The Square of %.2f is: %.2f", num, result);
	float result2 = sqrt(num);
	printf("\nThe Square Root of %.2f is: %.2f", num, result2); 
	return 0;
}
