#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
           for(j=1;j<=i;j++){
            printf("%c  ",64+j);
           }
        }
        else
            for(j=1;j<=i;j++){
            printf("%d  ",j);
           }
       printf("\n");
    }
    return 0;
}