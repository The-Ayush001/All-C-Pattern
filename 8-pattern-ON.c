#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
        continue;
        for(j=1;j<=i;j++){
            if(j%2==0)
               continue;
                printf("%d  ",j);
            
        }
        printf("\n");
    }
}