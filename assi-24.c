// Write a function that computer xn,where x is any valid number and n an integer value
#include<stdio.h>
double power (double x,int n){
    double result=1.0;
    int exp=n;
    if (n<0){
        x =1/x;
        exp =-exp;;
    }
    while(exp>0){
        if(exp%2 ==1){
            result*=x;
        }
        x*=x;
        exp/=2;
    }
    return result;
}
int main(){
    double x;
    int n;
    printf("Enter the base (x): ");
scanf("%lf",&x);
printf("Enter the exponent (n):");
scanf("%d",&n);
printf("%.2lf^%d=%.5lf\n",x,n,power(x,n));
return 0;
}
