#include<stdio.h>

#include<stdlib.h>

struct node
{
    char name[10];
    struct node *next;
};

struct node *head;

void create()
{
    struct node *temp,*new;
    temp=head;
    for(int i=0;i<4;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter name :");
        scanf(" %s",new->name);
        new->next=NULL;
        temp->next=new;
        temp=temp->next;
    }
    temp->next=head;
}
void display()
{
    struct node *temp;
    temp=head->next;
    printf("%s\n",head->name);
    while(temp!=head)
    {
        printf("%s\n",temp->name);
        temp=temp->next;
    }
}

void deleteA()
{
    int pos=2,i=0;
    struct node *p,*q;
    p=head;
    //printf("Enter Position");
    while(i!=pos)
    {
        q=p;
        p=p->next;
        i++;
    }
    q->next=p->next;
    free(p);
}
void count()
{
    struct node *temp;
    temp=head->next;
    //temp->next=head;
    int count=1;
    while(temp!=head)
    {
        temp=temp->next;
        count++;
    }
    printf("No of members %d\n",count);
}

void insertA()
{
    struct node *new,*p,*q;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter name :");
    scanf(" %s",new->name);
   // new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    int i=0;
    p=head;
    while(i!=3)
    {
        q=p;
        p=p->next;
        i++;
    }
    q->next=new;
    new->next=p;
}


int main()
{
    int ch;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter name :");
    scanf("%s",head->name);
    head->next=NULL;
    create();
    display();
    do{
        printf("----MENU----\n");
        printf("1.Delete Anand\n2.Count list\n3.Insert Anita after Anand\n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                deleteA();
                display();
                printf("\n");
                break;
            case 2:
                count();
                printf("\n");
                break;
            case 3:
                insertA();
                printf("\n");
                display();
                printf("\n");
                break;
                
                
        }
        
    }while(ch!=4);
    
}