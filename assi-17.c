//WAP to add two number by using call by value.
#include<stdio.h>
int add(int x,int y){
    int total;
    total=x+y;
    return total;
}
int main(){
    int num1,num2,sum;
    printf("Enter the 1st number :");
    scanf("%d",&num1);
    printf("Enter the 1st number :");
    scanf("%d",&num2);
    sum=add(num1,num2);
    printf("Sum to two number = %d",sum);
    return 0;
}