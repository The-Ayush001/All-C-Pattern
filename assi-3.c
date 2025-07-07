//WAP to find whether a character is consonant or vowel using switch stsatnent
#include<stdio.h>
int main (){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    switch(ch){
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("%c is a vowel.",ch);
        break;
        default:
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
            printf("%c is a consonant",ch);
        else
            printf("Given input is not alphabet");    
    }
    return 0;
}