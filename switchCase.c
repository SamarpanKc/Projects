// Write a program to find grade of a student given his marks based on below:

#include <stdio.h>

int main(){
	int p;
	printf(">>> Enter your Percentage: ");
	scanf("%d", &p);
	if(p>90 && p<=100){
		printf("Your Grade is A");
	}else if(p>80 && p<=90){
		printf("Your Grade is B");
	}else if(p>70 && p<=80){
		printf("Your Grade is C");
	}else if(p>60 && p<=70){
		printf("Your Grade is D");
	}else if(p>50 && p<=60){
		printf("Your Grade is E");
	}else if(p<=50){
		printf("Your Grade is F");
	}
	return 0;
}

/*
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/
