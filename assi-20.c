//WAP to calculate the factorial of a number
#include<stdio.h>
int factorial(int n){
    if(n==1||n==0){
        return ;
    }
    int result=n*factorial(n-1);
    return result;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d number :%d\n",n,fact);
    return 0;
}