// Disply largest samallest and middle

#include <stdio.h>

int main() {
    int num, num2, num3;

    // Assume you have input for num, num2, and num3
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Determine largest, middle, and smallest
    int largest, middle, smallest;

    // Finding the largest number
    if (num >= num2 && num >= num3) {
        largest = num;
        if (num2 >= num3) {
            middle = num2;
            smallest = num3;
        } else {
            middle = num3;
            smallest = num2;
        }
    } else if (num2 >= num && num2 >= num3) {
        largest = num2;
        if (num >= num3) {
            middle = num;
            smallest = num3;
        } else {
            middle = num3;
            smallest = num;
        }
    } else { // num3 is the largest
        largest = num3;
        if (num >= num2) {
            middle = num;
            smallest = num2;
        } else {
            middle = num2;
            smallest = num;
        }
    }

    // Print the results
    printf("The largest number is %d.\n", largest);
    printf("The middle number is %d.\n", middle);
    printf("The smallest number is %d.\n", smallest);

    return 0;
}
