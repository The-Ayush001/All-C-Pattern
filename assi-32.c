//32. Write a program to find the biggest and smallest number and positions in the given array
#include<stdio.h>
int main(){
    int arr[10];
    int max,min,max_pos,min_pos;
    printf("Enter 10 numbers:\n");
    for(int i=0; i<10; i++){
        printf("Number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    max_pos=min_pos=0;
    for(int i=1; i<10; i++){
        if(arr[i]>max){
            max=arr[i];
            max_pos=i;
        }
        if(arr[i]<min){
        min=arr[i];
        min_pos= i;
        }
    }
    printf("\n biggest number: %d at position %d", max , max_pos+1);
    printf("\n smallest number: %d at position %d",min , min_pos+1);
    return 0;
}