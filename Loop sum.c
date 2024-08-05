// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main(){
	int num = 1;
	int sum = 0;
//	do{
//		sum +=num;
//		num ++;
//	}while(num<=10);
	
	for(sum =1; sum>=10; sum++)
	sum +=num;
	
	printf("%d", sum);
	return 0;
}

