#include<stdio.h>
void main()
{
int number,flag=0,i;
printf("enter the number");
scanf("%d",&number);
for(i=2;i<number/2;i++)
{
if(number%i==0)
{
flag=flag+1;
break;
}
}
if(flag==0)
printf("it is a prime number");
else
printf("it is not a prime number");
return;
}
