#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r,si,ci;
printf("enter p,t and r");
scanf("%d%d%d",&p,&t,&r);
si=p*t*r/100;
ci=p*pow(1+r/100,t);
printf("the si is %d\n",si);
printf("the ci is %d",ci);
return;
}
