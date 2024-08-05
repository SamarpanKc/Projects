// Disply largest samallest and middle

#include <stdio.h>
int main() {
    char v;
    printf("Enter a Character: ");
    scanf("%c", &v);
    printf("The ASCII value %c is %d.", v, v);
    
    if(v>=65 && v<=90){
    	printf("\nThe Character %c is UpperCase.", v);
	} else if(v>= 97 && v<=122){
		printf("\nThe Character %c is lowerCase.", v);
	}
    
    return 0;
}
//A-Z 65 - 90
