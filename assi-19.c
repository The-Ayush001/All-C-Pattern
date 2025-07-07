//WAP to swap two number by using call by value.
#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapint :\n");
    printf("A:%d \nB:%d",a,b);
    
}
int main(){
    int x,y;
    printf("Enter the 1st number: ");
    scanf("%d",&x);
    printf("Enter the 2nd number: ");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}