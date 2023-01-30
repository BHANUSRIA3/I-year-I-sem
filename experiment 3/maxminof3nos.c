#include<stdio.h>
void main()
{
int a,b,c,max,min;
printf("enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
max=a>b?(a>c?a:c):(b>c?b:c);
min=a<b?(a<c?a:c):(b<c?b:c);
printf("\n is the max number is %d",max);
printf("\n is the min number is %d",min);
return;
}
