//WAP to find whether number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%2==0){
        printf("Giver number is even number");
    }
    if(num%2!=0){
        printf("Giver number is odd number");
    }
    return 0;
}