/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    printf("\n Enter name and PRN number \n");
    gets(new->name);
    scanf("%d",&new->prn); 
    
    new->prv=head;
    head->next=new;
    new->next=NULL;
}

void main() {
    // Write C code here
    struct abc *head;
    
    head = (struct abc*)malloc(sizeof(struct abc));
    
    printf("\n Enter name and PRN number \n");
    gets(head->name);
    scanf("%d",&head->prn);
    head->prv=NULL;
    head->next=NULL;
    
    insertS(head);
}

