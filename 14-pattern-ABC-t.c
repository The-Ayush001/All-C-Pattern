#include<stdio.h>
int main(){
    int n;
    printf("ABCD squre box \n");
    printf("Enter the nnumber :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=64;
        for(int j=1;j<=n;j++){
            printf("%c\t",a+j);
        }
        printf("\n");
    }
}