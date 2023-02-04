#include<stdio.h>
#include<math.h>
void main()
{
int i,s,u;
float a,t;
printf("enter the speed");
scanf("%d",&u);
printf("enter the acceleration\n");
scanf("%f",&a);
printf("enter the distance");
scanf("%d",&s);
for(i=1;i<=10;i++,s=s+3)
{
t=u+sqrt(u*u+2*a*s);
}
printf("at this floor time taken is %5f",t);
return;
}

