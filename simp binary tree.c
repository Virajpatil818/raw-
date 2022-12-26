#include <stdio.h>
#include <stdlib.h>

struct tree * create();
void preorder(struct tree *root);

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};

int main(){
    struct tree *root;
    root=NULL;
    root = create();
    
    printf("\n preorder is :");
    preorder(root);
    
    printf("\n inorder is :");
    inorder(root);
    
    printf("\n postorder is :");
    postorder(root);
    
    return 0;
}

void preorder(struct tree *root){
    if(root==NULL){
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct tree *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

void postorder(struct tree *root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

struct tree * create(){
    struct tree *new;
    int d;
    new=(struct tree *)malloc(sizeof(struct tree));
    printf("\n Enter data to insert (-1 if no node )\n");
    scanf("%d",&d);
    new->data=d;
    if(d==-1){
        return NULL;
    }
    printf(" Enter data to left of %d",d);
    new->left=create();
    
    printf(" Enter data to right of %d",d);
    new->right=create();
    
    return new;
}

