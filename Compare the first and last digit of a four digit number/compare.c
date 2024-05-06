#include<stdio.h>
int main () {
    int a,b,n;
    printf("Enter four digit number :");
    scanf("%d",&n);

    a=n/1000;
    b=n%10;

    if(a>b){
        printf("%d is greater ",a);
    }else if(a<b){
        printf("%d is greater",b);
    }
    
 return 0;
}