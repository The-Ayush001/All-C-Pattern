// WAp to find sum of digits of an entered number
#include<stdio.h>
int main(){
    int n,i,sum=0,lastdigits;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        lastdigits=n%10;
         sum +=lastdigits;
         n=n/10;
    }
    printf("Sum of digits :%d",sum);
    return 0;
}