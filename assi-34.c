//34. The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, begins with the terms 0 & 1 and has the property that each succeeding term is the sum of the two preceding terms. For this problem, write a recursive function fib (m) that calculates the mth Fibonacci number. 
#include<stdio.h>
int fibo(int m){
    if(m<=2) return 1;
    return fibo(m-1)+fibo(m-2);
}
int main(){
    int m;
    printf("Enter the position (m) to find the fibonicci number:");
    scanf("%d",&m);
    printf("%d",m);
    int x=fibo(m);
    printf("%d",x);
    return 0;
}
