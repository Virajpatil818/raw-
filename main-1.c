#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 struct abc{
        char c;
        struct abc *next;
    }*top=NULL;
int i=-1;

void push(int n){
    struct abc *new;
    if(i==(n-1)){
        printf("Overflow \n");
    }
    else{
         new=(struct abc*)malloc(sizeof(struct abc));
        printf("Enter char \n");
        scanf(" %c",&new->c);
        new->next=NULL;
        if(top==NULL){
            top=new;
            i++;
        }
        else{
            new->next=top;
            top=new;
            i++;
        }
    }
}

char pop(){
  char b;
    struct abc *temp;
    temp=top;

    if(i==-1){
        printf("Underflow \n");
    }
    else{
        temp=top;
        b=temp->c;
        top=top->next;
        free(temp);
        i--;
    }
    return b;
}

void peak(){
    if(i!=-1){
        printf(" peak of stack : %c \n",top->c);
    }
}
void main(){
    char a;
    int n,ch;
    
    printf("Enter size of stack \n");
    scanf("%d",&n);
  
do{
    printf("1]push\n");
     printf("2]pop \n");
      printf("3]peak \n");
      scanf("%d",&ch);
      switch(ch){
          case 1:
          if(i<(n-1)){
          push(n);
          }
          break;
          
          case 2:
          
          printf("popped element is : %c \n ", pop());
          break;
          
          case 3:
          
          peak(n);
          break;
          
      }
      
}while(ch!=5);
} 