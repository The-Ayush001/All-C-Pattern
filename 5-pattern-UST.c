#include<stdio.h>
int main()
{
    int i,j,a,n;
    printf("Enter the number =");
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++){
        // for(j=1;j<=n+1-i;j++){
        //     printf("*  ");
        
         for(j=1;j<=a;j++){
            printf("*  ");
        }
        a--;
        printf("\n");
    }
    return 0;
}