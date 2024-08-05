// Calculate the area of a circle and modify the same program to calculate
// the volume of a cylinder given its radius and height.

#include <stdio.h>
#include <math.h>
const float PI = 3.14;
int main(){
	float radius;
	float height;
	printf("Volume of Cylinder\n");
	printf("\nEnter the Raduis: ");
	scanf("%f", &radius);
	printf("\nEnter the Height: ");
	scanf("%f", &height);
	float volume = PI*pow(radius,2)*height;
	printf("\nThe Volume of Cylinder is : %f\n", volume);
	return 0;
}


