/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node*left,*right;
};

struct node* newNODE(int item) //
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->key = item;
        temp->left = temp->right = NULL;
        return temp;
}

struct node* insert(struct node* node,int key)
{
    if(node == NULL)
        return newNODE(key);
    if(key<node->key){
        node->left = insert(node->left,key);
    }
    else if(key>node->key){
        node->right =insert(node->right,key);
    }

    return node;
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->key);
        inorder(root->right);
    }

}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d",root->key);
        preorder(root->left);
        preorder(root->right);
    }

}
int main(){
    struct node* root = NULL; 

    root = insert(root, 50); 
    root = insert(root, 30); 
    root = insert(root, 20); 
    root = insert(root, 40); 
    root = insert(root, 60); 
    root = insert(root, 80); 

    printf("\n\n\n In-Order View:\n");
    inorder(root); 

    printf("\n\n\n Pre-Order View:\n");  
    preorder(root); 

    return 0;
}
    */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node* newNODE(int item)
{
    struct node *temp =
        (struct node*)malloc(sizeof(struct node));

    temp->key = item;
    temp->left = temp->right = NULL;

    return temp;
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNODE(key);

    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }

    return node;
}

void inorder(struct node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void preorder(struct node* root)
{
    if (root != NULL)                    
    {                                             
        printf("%d ", root->key);   
        preorder(root->left);       
        preorder(root->right);      
    }                               
}

int main()
{
    struct node* root = NULL;   

    root = insert(root, 50);           
    root = insert(root, 30);       
    root = insert(root, 20);        
    root = insert(root, 40);        
    root = insert(root, 60);        
    root = insert(root, 80);        

    printf("\nIn-Order View:\n");
    inorder(root);                  

    printf("\n\nPre-Order View:\n");    
    preorder(root);                     

    return 0;                               
}

int main (){
    int a;
    printf("enter number: ");
    scanf("%d",&a);
}