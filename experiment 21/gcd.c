#include<stdio.h>
int recgcd(int,int);
int nonrecgcd(int,int);
int main()
{
int a,b,c,d;
printf("enter two numbers a,b");
scanf("%d%d",&a,&b);
c=recgcd(a,b);
printf("the gcd of two numbers using recursion is %d\n",c);
d=nonrecgcd(a,b);
printf("the gcd of two numbers without using recursion is %d\n",d);
return 0;
}
int recgcd(int x,int y)
{
if(y==0)
{
return(x);
}
else
{
return(recgcd(y,x%y));
}
}
int nonrecgcd(int x,int y)
{
int z;
while(x%y!=0)
{
z=x%y;
x=y;
y=z;
}
return(y);
}
