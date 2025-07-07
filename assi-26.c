//WAP to find entered number is palindrome or not.
#include<stdio.h>
int ispalindrome(int num){
    int originalnum = num , reversednum = 0, remainder;
    while(num!=0){
        remainder= num%10;
        reversednum = reversednum * 10 + remainder;
        num/=10;
    }
    return originalnum == reversednum;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(ispalindrome(num)){
        printf("%d is a palindrome number.\n",num);
    }
    else{
        printf("%d is not a palindrome number.\n",num);
    }
    return 0;
}