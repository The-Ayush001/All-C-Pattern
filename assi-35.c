//35. Suppose two numbers m & n are given as input by user to multiply. For this problem, write a recursive function multiplication (m, n) that calculates the multiplication of both the numbers 
#include<stdio.h>
int multiplication(int m, int n){
    if(n==0)
    return 0;
if(n<0)
return -multiplication(m,-n);
return m+multiplication(m,n-1);
}
int main(){
    int m,n;
    printf("Enter first number:");
    scanf("%d",&m);
    printf("Enter second number:");
    scanf("%d",&n);

    int result = multiplication(m,n);
    printf("Multiplication of %d and %d is: %d\n",m,n,result);
    return 0;
}