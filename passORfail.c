/*	Calculate income tax paid by an employee to the government as per the slabs
	mentioned below:
	
	Income Slab 	Tax
 	2.5 – 5.0L 		5%
 	5.0L - 10.0L 	20%
 	Above 10.0L 	30%
*/

#include <stdio.h>

int main(){
    float income, tax = 0;
    printf("Enter the Income: ");
    scanf("%f", &income);
    
    if(income <= 250000){
        tax = 0;
    } else if(income <= 500000){
        tax = (income - 250000) * 0.05;
    } else if(income <= 1000000){
        tax = (500000 - 250000) * 0.05 + (income - 500000) * 0.20;
    } else {
        tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.20 + (income - 1000000) * 0.30;
    }
    
    printf("The Income Tax comes as: Rs %.2f\n", tax);
    
    return 0;
}
