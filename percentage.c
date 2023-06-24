#include<stdio.h>
int main()
{
float principle,time,rate, simpleinterest;
// find simple intrest 
printf("ent principle(amount):");
scanf("%f",&principle);
printf("ent time:");
scanf("%f",&time);
printf("ent rate:");
scanf("%f",&rate);
simpleinterest =( principle*time*rate)/100;
printf("simpleinterest: %f",simpleinterest);
return 0;
}
