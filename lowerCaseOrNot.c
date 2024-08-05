// Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>

int main(){
	char value;
	printf("Enter a Character: ");
	scanf("%c", &value);
	
	if(value>=97 && value<=122){
		printf("\n%d is the ASCII value of %c \n", value, value);
		printf("The character %c is lowerCase.\n", value);
	}else{
		printf("\n%c is not lowerCase.", value);
	}
	return 0;
}

// ASCII value   a=97		z=122
