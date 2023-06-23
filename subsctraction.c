#include<stdio.h>
int main()
{
	int number1,number2,sub;
	printf("enter your first number:");
	scanf("%d",&number1);
	printf("enter your second number");
	scanf("%d",&number2);
	sub=number1*number2;
	printf("%d-%d=%d",number1,number2,sub);
	return 0;
}
