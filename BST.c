// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct abc{
    int data;
    struct abc *left;
    struct abc *right;
};

struct abc *create(int key){
        struct abc *new;
        new=(struct abc*)malloc(sizeof(struct abc));
        new->data=key;
        new->left=NULL;
        new->right=NULL;
        
        return new;
}

struct abc *insert(struct abc *root,int key){
    if(root==NULL){
        return create(key);
    }
    else if(key < root->data){
        root->left=insert(root->left,key);
    }
    else {
         root->right=insert(root->right,key);
    }
    
    return root;
}

struct abc *search(struct abc *root,int find){
    if(root==NULL){
        printf(" tree is empty \n");
        }
    else if(find==root->data){
        printf(" Found");
    }
    else if(find < root->data){
        search(root->left,find);
    }
    else{
        search(root->right,find);
    }
}
void inorder(struct abc *root){
    if(root==NULL){
        return;
    }
    else {
        if(root!=NULL){
        inorder(root->left);
    }
    printf("%d",root->data);
    inorder(root->right);
    }
}

void preorder(struct abc *root){
     if(root==NULL){
        return;
    }
    else{
    if(root!=NULL){
         printf("%d",root->data);
    }
      preorder(root->left);
    preorder(root->right);
    }
}

void postorder(struct abc *root){
     if(root==NULL){
        return;
    }
    else{
    if(root!=NULL){
        postorder(root->left);
    }
    postorder(root->right);
    printf("%d",root->data);
    }
}


int main() {
    struct abc *root=NULL;
    
    int ch,key,find;
    
    do{
        printf("\n1.Insert \n");
         printf("2.Search \n");
          printf("3.Delete \n");
           printf("4.traverse \n");
           scanf("%d",&ch);
           
           switch(ch){
               case 1:
               printf(" Enter data \n");
               scanf("%d",&key);
               root=insert(root,key);
               break;
               
             case 2:
              printf(" enter data to find \n");
              scanf("%d",&find);
              search(root,find);
             break;
             
             case 4:
               printf("Inorder traversal is : ");
               inorder(root);
               printf("\npreorder traversal is : ");
               preorder(root);
               printf("\npostorder traversal is : ");
               postorder(root);
               break;
             
           }
    }while(ch!=0);

    return 0;
}
