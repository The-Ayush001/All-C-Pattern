//WAP to calculate the binomial coefficient.
#include<stdio.h>
long long factorial (int num){
    long long fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}
long long Binomialcoefficient(int n , int k){
    if(k>n) return 0;
    return factorial(n) / (factorial(k) * factorial(n-k));
}
    
    int main(){
    int n , k;
    printf("Enter n and k (n>=k):");
    scanf("%d %d",&n, &k);
    if(k<0 || n<0 || k>n){
        printf("Invalid input. Ensure n >= k >= 0.\n");
    }
    else{
        printf("Binomial coefficient c(%d , %d) = %lld\n ",n, k, Binomialcoefficient(n,k));
    }
    return 0;
}