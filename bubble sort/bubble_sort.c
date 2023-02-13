#include <stdio.h>
void bubble_sort(int [],int);
int main(){
int n;
printf("enter the size : ");
scanf("%d",&n);
int a[n];
printf("enter the elements  :");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
bubble_sort(a,n);
return 0;
}
void bubble_sort(int a[],int n){
int temp=0;
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("the new elements are :");
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
return ;
}

