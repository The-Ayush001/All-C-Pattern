/*WAP tp take input of name, roll no & marks obtained by a 
student in 4 subject of 100 makrs each & display the named ,roll no 
with percentage score secured*/
#include<stdio.h>
#include<string.h>
int main(){
    float roll ,marks,sum=0;
    float percentage;
    char name[20],middle[20],last[20];
      printf("Enter the name : ");
      scanf("%[^\n]",name);
      printf("Enter the roll no : ");
      scanf("%f",&roll);
    for (int i=1;i<=4;i++){
        printf("\nEnter the %d subject marks : ",i);
        scanf("%f",&marks);
        sum=sum + marks;
    }
       percentage = sum/4.0;
       printf("\nName of student : %s ",name);
       printf("\nRoll no : %.0f",roll);
       printf("\nTotal number :%.2f",sum);
       printf("\npercentage : %.2f",percentage);
    return 0;
}