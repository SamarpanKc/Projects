/* Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

#include <stdio.h>
int main(){
	float p, t, r;
	printf("Enter the Principle: ");
	scanf("%f", &p);
	printf("Enter the Time of years: ");
	scanf("%f", &t);
	printf("Enter the Rate: ");
	scanf("%f", &r);
	float si= (p*t*r)/100;
	printf("\nThe Simple Interest is: %0.2f", si);
	return 0;
}

