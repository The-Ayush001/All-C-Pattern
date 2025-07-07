//WAP to enter a character and then determine whether it is a vowel or not
#include<stdio.h>
int vowel(char ch){
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("%c is a vowel",ch);
    }
    else
    printf("%c is not a vowel",ch);
}
int main(){
    char al ;
    printf("Enter the character : ");
    scanf("%c",&al);
    vowel(al);
    return 0;
}