#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct abc{
    char name[20];
    int prn;
    struct abc *prv;
    struct abc *next;
};

void insertS(struct abc *head)
{
    struct abc *new;
    new=(struct abc*)malloc(sizeof(struct abc));
    printf("\n Enter name of secretary and PRN number \n");
    scanf(" %s",new->name);
    scanf("%d",&new->prn); 
    
    new->prv=head;
    head->next=new;
    new->next=NULL;
}

void insertM(struct abc *head){
    struct abc *new;
    
            new=(struct abc*)malloc(sizeof(struct abc));
            printf("\n Enter name and PRN number \n");
            scanf("%s",new->name);
            scanf("%d",&new->prn);
            new->prv=NULL;
            new->next=NULL;
            
            new->next=head->next;
            new->next->prv=new;
            
            head->next=new;
            new->prv=head;
}

void deleteS(struct abc *head){
    struct abc *temp;
    temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prv->next=NULL;
    
    free(temp);
}

void deleteP(struct abc *head){
     struct abc *temp;
     temp=head;
     temp->next->prv=NULL;
     head=temp->next;
     free(temp);
    }

void display(struct abc *head){
    struct abc *temp;
    temp=head;
    int i=1;
    while(temp!=NULL){
        printf("%d) name \t %s PRN number \t %d",i,temp->name,temp->prn);
        temp=temp->next;
        i++;
        printf("\n");
    }
}

void main() {
    // Write C code here
    struct abc *head;
    
    head = (struct abc*)malloc(sizeof(struct abc));
    
    printf("\n Enter name of president and PRN number \n");
    scanf("%s",head->name);
    scanf("%d",&head->prn);
    head->prv=NULL;
    head->next=NULL;
    
    insertS(head);
    
      int ch,y;
    do{
      
        printf("\n1]insert member\n");
         printf("\n2]display\n");
          printf("\n3]delete secretary\n");
           printf("\n4]delete president\n");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
            insertM(head);
            break;
            
            case 2:
            display(head);
            break;
            
            case 3:
            deleteS(head);
            break;
            
            case 4:
            deleteP(head);
            break;
            
            default: printf("exit");
        }
    }while(ch!=5);
}
