#include<stdio.h>
void main()
{
int choice,a,b,c;
printf("1 is addition\n2 is subraction\n3 is product\n4 is division\n5 is modulus");
printf("enter the choice");
scanf("%d",&choice);
printf("enter a,b");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1:c=a+b;
printf("%d\n",c);
break;
case 2:c=a-b;
printf("%d\n",c);
break;
case 3:c=a*b;
printf("%d\n",c);
break;
case 4:c=a/b;
printf("%d\n",c);
break;
case 5:c=a%b;-
printf("%d\n",c);
break;
default:printf("enter the choice between 1 to 5");
}
return;
}
