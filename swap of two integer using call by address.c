#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a,n;
   // swap(int,int);
    scanf("%d%d",&a,&n);
    swap(&a,&n);
    printf("%d %d",a,n);
    
    return 0;
}
void swap(int* val1,int* val2){
    *val1=*val1+*val2;
    *val2=*val1-*val2;
    *val1=*val1-*val2;
    
    
} 
