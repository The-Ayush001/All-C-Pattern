//WAP to add two number by using call by refernce
#include<stdio.h>
void add(int *x,int *y,int *total){
    *total=*x+*y;
     return;
}
int main(){
    int num1,num2,sum;
    printf("Enter the 1st number :");
    scanf("%d",&num1);
    printf("Enter the 1st number :");
    scanf("%d",&num2);
    add(&num1,&num2,&sum);
    printf("Sum of giver number = %d",sum);
    return 0;
}