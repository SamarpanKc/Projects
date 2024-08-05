// WAP to find the Area and Circumference of a Circle (a= r2, c=2mr).

#include <stdio.h>
#include <math.h>
int main(){
	float r;
	const float PI= 3.14;
	printf("Enter a Radius: ");
	scanf("%f", &r);
	float area= PI * pow(r,2);
	printf("The Area of Circle is: %.3f", area);
	float Circumference = 2 * PI * pow(r,2);
	printf("\nThe Area of Circle is: %.3f", Circumference);
	return 0;
}
