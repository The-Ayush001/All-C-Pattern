//WAP to find average marks obtained by a class of 10 students in a test.
#include<stdio.h>
int main(){
    int marks[10];
    int sum =0;
    float average;
    printf("Enter marks obtained by 10 students:\n");
    for(int i=0; i<10; i++){
        printf("Student %d:",i+1);
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    average = sum/10.0;
    printf("\n Total marks = %d",sum);
    printf("\n Average marks = %.2f",average);
    return 0;
}