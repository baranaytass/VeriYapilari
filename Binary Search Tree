#include <stdio.h>
#include <stdlib.h>
//BİNARY SEARCH TREE

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* add(struct node* tree, int x){
    if(tree == NULL){
        struct node* root = (struct node*)malloc(sizeof(struct node));
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
    if(tree->data > x){
        tree->left=add(tree->left,x);
        return tree;
    }
    tree->right=add(tree->right,x);
    return tree;
}
void print_inorder(struct node* tree){
    if(tree==NULL){
        return;
    }
    print_inorder(tree->left);
    printf("%d  ",tree->data);
    print_inorder(tree->right);
}
int maxValue(struct node* tree){
    if(tree->right==NULL)
        return tree->data;
    maxValue(tree->right);
}
int minValue(struct node* tree){
    if(tree->left==NULL)
        return tree->data;
    minValue(tree->left);
}
int isThere(struct node* tree, int x){
    if(tree==NULL)
        return 0;
    if(x==tree->data)
        return 1;
    if(isThere(tree->left,x)==1)
        return 1;
    if(isThere(tree->right,x)==1)
        return 1;
    return 0;
}
struct node* deleteNode(struct node *tree,int x)
{
    if(tree==NULL){
        return NULL;
    }
    if(tree->data==x){
        if(tree->left==NULL && tree->right==NULL)
            return NULL;
        if(tree->right!=NULL){
            tree->data=minValue(tree->right);
            tree->right=deleteNode(tree->right,minValue(tree->right));
            return tree;
            } 
    tree->data=maxValue(tree->left);
    tree->left=deleteNode(tree->left,maxValue(tree->left));
    return tree;
    }
    if(tree->data<x){
        tree->right=deleteNode(tree->right,x);
        return tree;
    }
    tree->left = deleteNode(tree->left,x);
    return tree;
}
int main()
{
    struct node* tree;
    tree = add(tree, 57);
    tree = add(tree, 23);
    tree = add(tree, 52);
    tree = add(tree, 94);
    tree = add(tree, 75);
    tree = add(tree, 18);
    tree = add(tree, 42);
    tree = add(tree, 101);
    print_inorder(tree);
    printf("\n%d",maxValue(tree));
    printf("\n%d",minValue(tree));
    if(isThere(tree,94)==1)
        printf("\n%d vardır...\n",94);
    else
        printf("\n%d yoktur...\n",94);
    if(isThere(tree,13)==0)
        printf("\n%d yoktur...\n",13);
    else
        printf("\n%d vardır...\n",13);
    tree = deleteNode(tree,23);
    print_inorder(tree);
    
    return 0;
}
