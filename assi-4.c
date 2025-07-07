//WAP to calculate the area of a circle
#include<stdio.h>
 int main(){
    int radius;
    float area;
    //pi=3.14
    printf("Enter the radius of a circle: ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("Area of circle : %.2f",area);
    return 0;
}