#include<stdio.h>
void main(){
   int integer1;
   int integer2;
   scanf("%d%d",&integer1,&integer2);
   if(integer1>integer2){
       printf("%d",integer1);
       return;
   }
   printf("%d",integer2);
}
