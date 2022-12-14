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

struct abc *delete(struct abc *root,int del){
    if(root==NULL){
        printf(" tree is empty \n");
        return root;
    }
    else{
        if(del<root->data){
            root->left = delete(root->left,del);
        }
        else if(del>root->data){
            root->data = delete(root->right,del);
        }
        else{
            printf("element found \n");
            if(root->left==NULL){
                struct abc *temp;
                temp=root->right;
                root->data=temp->data;
                free(temp);
                return temp;
            }
            else if(root->right==NULL){
                struct abc *temp;
                temp=root->right;
                root->data=temp->data;
                free(temp);
                return temp;
            }
            else{
                struct abc *temp;
                temp=root->right;
                temp=inorderS(temp);
                root->data=temp->data;
                root->right=delete(root->right,temp->data);
            }
        }
    }
    return root;
}

struct abc *inorderS(struct abc *temp){
    struct abc *current;
    current=temp;
    while(current->left!=NULL && current==NULL){
        current=current->left;
        return current;
    }
}
int main() {
    struct abc *root=NULL;
    
    int ch,key,find,del;
    
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
             
             case 3:
              printf(" enter data to delete \n");
              scanf("%d",&del);
              root=delete(root,del);
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
