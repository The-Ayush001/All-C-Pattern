// WAP to print whether a given number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :-");
    scanf("%d",&num);
    if(num%2==0){
        printf("Given numbrt is Even");
    }
    else{
       printf("Giver number Odd");
    }
   return 0; 
}