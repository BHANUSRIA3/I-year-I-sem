#include<stdio.h>
int linear_search(int [],int,int);
int main()
{
int size,key,n,i;
printf("enter the size:");
scanf("%d",&size);
int a[size];
printf("enter the elements");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("enter the key");
scanf("%d",&key);
int pos=0;
pos=linear_search(a,size,key);
if(pos==-1)
{
printf("search is unsuccessful");
}
else{
printf("element found at %d",pos);
return 0;
}
}
int linear_search(int a[],int size,int key)
{
int i;
for(i=0;i<size;i++){
if(a[i]==key){
return i+1;
}
return -1;
}
}



