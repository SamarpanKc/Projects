/* Write a program to convert Celsius (Centigrade degrees 
temperature to Fahrenheit).
*/

#include <stdio.h>

int main(){
	printf("Celsius to Fahrenheit Conversion\n");
	float celc;
	printf("Please enter a Celcius Value: ");
	scanf("%f", &celc);
	float cnv = (9/2*celc)+32;
	printf("The Fahrenheit of %0.1f is: %0.1f degree.", celc, cnv);
	return 0;
}
