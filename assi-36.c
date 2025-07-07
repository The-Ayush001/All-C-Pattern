//36. Suppose two numbers m & n are given as input by user to divide m by n. For this problem, write a recursive function Division (m,n) that calculates the division of m by n. 
#include<stdio.h>
int division(int m, int n){
    if(n==0){
        printf("Error: division by zero is undefined.\n");
        return 0;
    }
    if(m<n)
    return 0;
    return 1 + division(m-n,n);
}
int main(){
    int m,n;
    printf("Enter dividend:");
    scanf("%d",&m);
    printf("Enter divisor:");
    scanf("%d",&n);
    int result = division(m,n);
    printf("Division of %d by %d gives quotient: %d\n",m,n,result);
    return 0;
}