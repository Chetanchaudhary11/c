#include<stdio.h>
int main()
{
	int number1,number2,modulo;
	printf("enter your first number:");
	scanf("%d",&number1);
	printf("enter your second number");
	scanf("%d",&number2);
	modulo=number1*number2;
	printf("%d%%d=%d",number1,number2,modulo);
}
