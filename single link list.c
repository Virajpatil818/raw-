// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct abc{
    char c[20];
    struct abc *next;
};

struct abc *head;

int main() {
  struct abc *new,*temp;
 
  head=(struct abc *)malloc(sizeof(struct abc));
  printf(" Enter name \n");
  scanf(" %s",head->c);
  
  head->next=NULL;
  
  temp=head;
  for(int i=0;i<4;i++){
      new=(struct abc *)malloc(sizeof(struct abc));
      printf(" Enter name \n");
      scanf(" %s",new->c);
      temp->next=new;
      temp=temp->next;
  }

  int ch,pos;
  struct abc *p,*q;
  do{
      printf("\n 1] insert at beg \n");
       printf("\n 2] insert at interm \n");
        printf("\n 3] insert at end \n");
         printf("\n 4] delete at beg \n");
          printf("\n 5] insert at interm \n");
           printf("\n 6] insert at end \n");
            printf("\n 7] display \n");
           scanf("%d",&ch);
           
           switch(ch){
               case 1:
             new=(struct abc *)malloc(sizeof(struct abc));
             printf("Enter new name \n");
             scanf(" %s",new->c);
             
             new->next=NULL;
             new->next=head;
             head=new;
             
             break;
             
             case 2:
             
             printf(" Enter position for insert name \n");
             scanf(" %d",&pos);
             
             int i=0;
              new=(struct abc *)malloc(sizeof(struct abc));
               printf("Enter new name \n");
             scanf(" %s",new->c);
             
             new->next=NULL;
             
             temp=p=head;
             
             while(i!=pos){
                 p=temp;
                 temp=temp->next;
                 i++;
             }
             p->next=new;
             new->next=temp;
             
             break;
             
             case 3:
             
             temp=head;
             new=(struct abc *)malloc(sizeof(struct abc));
             printf("Enter new name \n");
             scanf(" %s",new->c);
             
             while(temp->next!=NULL){
                 temp=temp->next;
             }
                 temp->next=new;
           
           break;
           
           case 4:
           
           temp=head;
           head=head->next;
           free(temp);
           
           break;
           
           case 5:
           
           printf(" Enter position to delete name \n");
           scanf(" %d",&pos);
           int j=1;
           
           temp=head;
           
           while(j!=pos){
                 p=temp;
                 temp=temp->next;
                 j++;
             }
             p->next=temp->next;
             free(temp);
             
             break;
             
             
           case 6:
           
           p=q=head;
           while(p->next=NULL){
               q=p;;
               p=p->next;
           }
           free(p);
           q->next=NULL;
           
           break;
           
           case 7:
           
           temp=head;
           
           while(temp!=NULL){
               printf(" %s ",temp->c);
               temp=temp->next;
           }
           break;
           
           }
  }while(ch!=8);
    return 0;
}