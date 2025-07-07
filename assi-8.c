//WAP to reverse a string
#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main(){
    char name[10];
    printf("Enter the 1st name : ");
    scanf("%[^\n]",name);
    reverse(name);
    return 0;
}
void reverse(char str[]){
    int length;
    length=strlen(str);
    char reverse[100];
    for(int i=0;i<length;i++){
        reverse[i]=str[length-1-i];
    }
    reverse[length]='\0';
    printf("The reverse string is :\n");
    printf("%s",reverse);
    return;
}