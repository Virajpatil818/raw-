#include<stdio.h>
#define N 5
int queue[N];
int fro=-1;
int rear=-1;


void enqueue(int a){
     if(rear==(N-1)){
        printf(" overflow \n");
     }
     else if(fro==-1 && rear==-1){
        fro=rear=0;
        queue[rear]=a;
    }
    else{
        rear++;
        queue[rear]=a;
    }
}

void dequeue(){
    if(fro==-1 && rear==-1){
        printf(" Underflow \n");
    }
    else if(fro==rear){
        printf(" Deleted element is %d",queue[fro]);
        fro=rear=-1;
    }
    else{
        printf(" Deleted element is %d",queue[fro]);
        fro++;
    }
}

void display(){
      if(fro==-1 && rear==-1){
        printf(" queue is empty \n");
    }
    else{
        for(int i=fro;i<rear+1;i++){
            printf(" %d ",queue[i]);
        }
    }
}

void peek(){
      if(fro==-1 && rear==-1){
        printf(" queue is empty \n");
    }
    else{
        printf("peek of queue is %d \n",queue[fro]);
    }
}

void insertf(int data){
    if(fro<=0){
        printf(" queue is full \n");
    }
    else{
        fro=fro-1;
        queue[fro]=data;
    }
}

void deletef(){
    if(fro==-1){
        printf(" queue is empty \n");
        return;
    }
    else if(fro==rear){
        fro=rear=-1;
    }
    else{
        fro=fro+1;
    }

}

void insertr(data){
    rear=rear+1;
    queue[rear]=data;
}

void deleter(){
    int ab;
    if(rear==-1){
        printf(" queue is empty \n");
        return;
    }
    else{
            ab=queue[rear];
        if(rear==fro){
            rear=fro=-1;
        }
        else{
            rear=rear-1;
        }
    }
}
void main(){

    int ch,data;

    do{
        printf("\n 1.Enqueue \n");
        printf(" 2.Dequeue \n");
        printf(" 3.peek \n");
        printf(" 4.Display \n");
        printf(" 5.Insert from front \n");
        printf(" 6.Delete from front \n");
        printf(" 7.insert from rear \n");
        printf(" 8.delete from rear \n");
        printf(" 9.EXIT \n");

        scanf("%d",&ch);

        switch(ch){
           case 1:
            printf(" Enter element to add in queue\n");
            scanf("%d",&data);
            enqueue(data);
            break;

           case 2:
           dequeue();
           break;

           case 3:
            peek();
            break;

           case 4:
            display();
            break;

           case 5:
            printf(" Enter element to add in queue\n");
            scanf("%d",&data);
            insertf(data);
            break;

           case 6:
            deletef();
            break;

           case 7:
             printf(" Enter element to add in queue\n");
            scanf("%d",&data);
            insertr(data);
            break;

           case 8:
            deleter();

        }

    }while(ch!=0);
}
