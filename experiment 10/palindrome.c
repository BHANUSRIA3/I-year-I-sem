#include<stdio.h>
void main()
{
int rev=0,r,number,m;
printf("enter number");
scanf("%d",&number);
m=number;
while(number>0)
{
r=number%10;
rev=(rev*10)+r;
number=number/10;
}
printf("reverse of given no is %d\n",rev);
if(rev==m)
printf("the palindrome number is %d\n",m);
else
printf("%d is not a palindrome number",m);
return;
}
