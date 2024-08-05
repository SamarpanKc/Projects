// WAP that takes two integers as input and swaps their values using a temporary variable.

#include <stdio.h>
int main(){
	int num, numb, temp;
	printf("Enter First Number A: ");
	scanf("%d", &num);
	printf("Enter Second Number B: ");
	scanf("%d", &numb);
	temp = num;
	num = numb;
	numb = temp;
	printf("The Value is Swapped: \n A:%d \n B:%d",num, numb);
	return 0;
}
