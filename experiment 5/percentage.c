#include<stdio.h>
void main()
{
int percentage;
printf("enter the percentage");
scanf("%d",&percentage);
if(percentage>=70&&percentage<=100)
printf("distinction\n");
else if(percentage>=60&&percentage<=70)
printf("firstclass");
else if(percentage>=50&&percentage<=60)
printf("secondclass");
else if(percentage>=1&&percentage<=50)
printf("fail");
else
printf("enter numbers between 1 and 100");
printf("percentage obtained is %d",percentage);
return;
}

