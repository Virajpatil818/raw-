// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
struct pqr{
    char c[20];
    int d;
    struct pqr *next;
};
int main() {
   
     int n;
     
     printf("Enter number of nodes \n");
     scanf("%d",&n);
     
     struct pqr *head;
     struct pqr *new;
     struct pqr *temp;
     
     head=(struct pqr *)malloc(sizeof(struct pqr));
    
     printf("Enter name \n");
     scanf("%s",head->c);
     printf("Enter prn \n");
     scanf("%d",&head->d);
     
     head->next=NULL;
     
     temp=head;
     
     for(int i=0;i<n-1;i++){
          new=(struct pqr *)malloc(sizeof(struct pqr));
    
     printf("Enter name \n");
     scanf("%s",new->c);
     printf("Enter prn \n");
     scanf("%d",&new->d);
     
     new->next=NULL;
     temp->next=new;
     temp=temp->next;
     
     }
     int ch,count=0;
    int p,i=1;
     do{
          struct pqr *newnode,*prv;
         printf("1.display \n");
         printf("2.insert at beg \n");
         printf("3.delete\n");
         scanf("%d",&ch);
         
         switch(ch){
     
     case 1:
     temp=head;
       for(int i=0;i<n;i++){
       if(temp!=NULL){
           printf("%s  %d \n",temp->c,temp->d);
           temp=temp->next;
       }
       }
        break;
     case 2:
     
       
        newnode=(struct pqr *)malloc(sizeof(struct pqr));
        printf("Enter name \n");
     scanf("%s",newnode->c);
     printf("Enter prn \n");
     scanf("%d",&newnode->d);
       
       newnode->next=NULL;
       
       newnode->next=head;
       
       head=newnode;
       
       while(temp->next!=NULL){
           temp=temp->next;
       }
       temp->next=newnode;
       
       temp=head;
       for(int i=0;i<n+1;i++){
       if(temp!=NULL){
           printf("%s  %d \n",temp->c,temp->d);
           temp=temp->next;
       }
       }
       break;
       
       case 3:
       
       temp=head;
       
       while(temp->next=NULL){
           prv=temp;
           temp=temp->next;
       }
       prv->next=NULL;
       
       free(temp);
       
       
       
         }
       }while(ch!=3);
       
    return 0;
}