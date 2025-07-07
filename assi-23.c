// WAP to find Armstrong number between 1 to 500
#include<stdio.h>
int main(){
    int num1,num2,remainder,result;
    printf("Armstrong number betwween 1 to 500 :\n");
    for(num1=1;num1<=500;num1++){
        num2=num1;
        result=0;
        while(num2!=0){
            remainder=num2%10;
            result+=remainder*remainder*remainder;
            num2/=10;
        }
        if(result==num1){
            printf("%d\n",num1);
        }
    }
    return 0;
}