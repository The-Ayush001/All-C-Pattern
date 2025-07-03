#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            //int d=64+j;
            // char ch=(char)d; USE OR NOT
            printf("%c   ",(64+j));
        }
        printf("\n");
    }
    return 0;
}