//WAP to read exactly 20 integer values, store the values in array called list and find sum of values.
#include<stdio.h>
int main(){
    int list[20];
    int sum =0;
    printf("Enter 20 integer values:\n");
    for(int i=0; i<20; i++){
        printf("Enter value %d:",i+1);
        scanf("%d",&list[i]);
        sum += list[i]; }
    printf("\n The sum of the entered values is:%d\n",sum);
    return 0;
}