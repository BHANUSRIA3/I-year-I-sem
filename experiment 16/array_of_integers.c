#include<stdio.h>
int main()
{
int n,i;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int max=a[0],min=a[0],avg=0;
int sum=0;
for(i=1;i<n;i++){
if(a[i]>a[0]){
max=a[i];
}
}
for(i=1;i<n;i++){
if(a[i]<a[0]){
min=a[i];
}
}
for(i=0;i<n;i++){
sum=sum+a[i];
}
avg=sum/n;
printf("max is %d\nmin is %d\naverage is %d",max,min,avg);
return 0;
}
