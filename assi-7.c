//WAP to print all even number form m to n
#include<stdio.h>
void number(int x,int y){
    printf("Even number between %d to %d\n",x,y);
    for(int i=x;i<=y;i++){
        if (i%2==0)
            printf("%d is even number\n",i);
    }
    return;
}
int main(){
    int m,n;
    printf("Enter the 1st number : ");
    scanf("%d",&m);
    printf("Enter the last number : ");
    scanf("%d",&n);
    number(m,n);
    return 0;
}