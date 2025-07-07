//WAP to demonstrate various operations (crrate,push,pop,overflow,underfliow,peek,display) to STACK using array implementation.
#include <stdio.h>
#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isEmpty(){
    return top==-1;}
     
int isFull(){
    return top==MAX-1;}
void push(int value){
    if (isFull()){
        printf("stack overflow cannot push %d\n ",value);
    } else{
        stack[++top]=value;
        printf("pusshed %d on to the stack.\n",value);}
void pop(){
    if (isEmpty()){
        printf("stack underflow cannot pop.\n");
    }else{
        printf("popped %d from the stack.\n",stack[top--]);}
    }
void peek(){
    if (isEmpty()){
        printf("stack is empty no top element. \n");
    }else{
        printf("top element is %d \n ",stack[top]);}
    }
void display(){
    if (isEmpty()){
        printf("Stack is empty.\n");
    } else{
        printf("stack element:");
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
        printf("\n");}
    }
    }
    int main(){
        int choice,value;
        while (1){
            printf("\nChoose an operatvion:\n");
            printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
            printf("Enter your choice");
            scanf("%d",&choice);
            switch (choice){
                case 1:
                printf("Enter the value to Push:");
                scanf("%d",&value);
                push(value);
                break;
                case 2: pop(); break;
                case 3: peek(); break;
                case 4: display(); break;
                case 5: exit(); break;
                default:
                printf("Invalid choice Please try again. \n");
            }
        }
        return 0;
    }
