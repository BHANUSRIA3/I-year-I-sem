#include<stdio.h>
int main(){
int n;
int num=1;
printf("enter the number of rows : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%5d",num);
  num++;
}

printf("\n");
}
return 0;
}
