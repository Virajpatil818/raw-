/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

struct abc{
    char c;
    struct abc *next;
}*top=NULL;
int l=-1;
void push(char c){
    struct abc *new;
    new=(struct abc*)malloc(sizeof(struct abc));
    new->c=c;
    new->next=NULL;
    new->next=top;
    top=new;
    l++;
}

int pop(){
    char b;
    struct abc *temp;
    temp=top;
    b=temp->c;
    top=top->next;
    free(temp);
    l--;
    
    return b;
}

int pre(char c){
   
   switch(c){
       case '^': return 3;
         case '*': return 2;
           case '/': return 2;
             case '+': return 1;
               case '-': return 1;
       
   } 
}

void main(){
    char infix[20],postfix[20];
    
    printf("Enter infix expression:");
    scanf(" %s",infix);
    
    int i=0,j=0;
    
    while(infix[i]!='\0'){
        if(isalnum(infix[i])){
            postfix[j]=infix[i];
            j++;
        }
        else{
            if(top==NULL){
                push(infix[i]);
            }
            else{
                while(pre(top->c)>=pre(infix[i]) && top!=NULL){
                    postfix[j]=pop();
                    j++;
                }
            }
            push(infix[i]);
        }
        i++;
    }
    
    while(top!=NULL){
        postfix[j]=pop();
        j++;
    }
    printf(" %s ",postfix);
}
