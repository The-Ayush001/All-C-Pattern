//33. The factorial of a number is expressed as a series of repetitive multiplication as shown below: Factorial of m = m* (m-1) * (m-2)….3.2.1
#include<stdio.h>
long long factorial(int m){
    long long fact =1;
    for(int i=m; i > 1; i--){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int m;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &m);
    if(m<0){
        printf("Factorial is not defined for negative numbers.\n");
    }else{
        printf("Factorial of %d = %lld\n",m,factorial(m));
    }
    return 0;
}