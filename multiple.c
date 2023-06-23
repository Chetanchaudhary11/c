#include<stdio.h>
int main()
{
	int number1,number2,multiplication;
	printf("enter your first number:");
	scanf("%d",&number1);
	printf("enter your second number");
	scanf("%d",&number2);
	multiplication=number1*number2;
	printf("%d*%d=%d",number1,number2,multiplication);
	return 0;
}
