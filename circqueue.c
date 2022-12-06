// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define n 5
int arr[n];

int front=-1;
int rear=-1;

void enqueue(){
    int data;
    printf(" Enter data \n");
             scanf(" %d",&data);
    if((rear==n-1 && front==0) || ((rear+1)%n==front)){
        printf(" queue is full \n");
    }
    else if(rear==-1){
        rear=front=0;
        arr[rear]=data;
    }
    else{
        rear=((rear+1)%n);
        arr[rear]=data;
    }
}

void dequeue(){
    if(front==-1){
        printf(" Queue is empty");
        return;
    }
    else{
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=((front+1)%n);
        }
    }
}

void display(){
    int temp;
    temp=front;
    while(temp!=rear){
        printf(" %d",arr[temp]);
        temp++;
    }
     printf(" %d",arr[temp]);
}
void main() {
     int ch;
     do{
         printf("\n Enter your choice \n");
         printf(" 1. Enqueue \n");
         printf(" 2. Dequeue \n");
         printf(" 3. Display  \n");
         scanf("%d",&ch);
         
         switch(ch){
             case 1:
             enqueue();
             break;
             
             case 2:
             dequeue();
             break;
             
             case 3:
             display();
             break;
         }
     }while(ch!=5);
}