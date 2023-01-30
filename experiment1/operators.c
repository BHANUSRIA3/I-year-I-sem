#include<stdio.h>
void main()
{
int a,b,sum,difference,multiplication,division,mod,greaterthan,lessthan,equal,notequal,logicalor,logicaland,logicalnot,bitwiseor,bitwiseand;
printf("enter a and b");
scanf("%d%d",&a,&b);
sum=a+b;
difference=a-b;
multiplication=a*b;
division=a/b;
mod=a%b;
greaterthan=a>b;
lessthan=a<b;
equal=(a==b);
notequal=(a!=b);
logicalor=(a==b||a>b);
logicaland=(a>b&&a<b);
logicalnot=!(a!=b&&a>b);
bitwiseor=(a<b|b>a);
bitwiseand=(a=b&b<a);
printf("sum=%d\ndifference=%d\nmultiplication=%d\ndivision=%d\nmod=%d\ngreaterthan=%d\nlessthan=%d\n",sum,difference,multiplication,division,mod,greaterthan,lessthan);
printf("equal=%d\nnotequal=%d\nlogicalor=%d\n",equal,notequal,logicalor);
printf("logicaland=%d\nlogicalnot=%d\nbitwiseor=%d\nbitwiseand=%d",logicaland,logicalnot,bitwiseor,bitwiseand);
return;
}
