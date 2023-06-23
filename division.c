#include<stdio.h>
int main()
{
	int number1,number2,div;
	printf("enter your first number:");
	scanf("%d",&number1);
	printf("enter your second number");
	scanf("%d",&number2);
	div=number1*number2;
	printf("%d/%d=%d",number1,number2,div);
	return 0;
}
