#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* temp;
struct node* newNode(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}
void push(struct node** root,int x){
    if(root==NULL){
        struct node* newnode = newNode(x);
        *root=newnode;
    }
    else{
        struct node* newnode = newNode(x);
        newnode->next=*root;
        *root=newnode;
    }
}
void pop(struct node** root){
    if(*root==NULL){
        printf("Silinecek bir eleman bulunmamaktadir...");
        return;
    }
    temp=*root;
    *root=(*root)->next;
    free(temp);
}
void peek(struct node* root){
    if(root==NULL){
        printf("Yiginda Gösterilecek Bir Sayi yok!");
        return;
    }
    temp=root;
    printf("TOP -> ");
    while(temp->next!=NULL){
        printf("%d =>",temp->data);
        temp=temp->next;
    }
    printf("%d \n",temp->data);
}
void destroy(struct node** root){
    while((*root)->next!=NULL){
        pop(root);
    }
    pop(root);
}
int main(){
    int secim,sayi;
    struct node* root;
    while(1==1){
        printf("1-push\n");
        printf("2-pop\n"); 
        printf("3-peek\n");
        printf("4-destroy\n");
        scanf("%d",&secim);
        
        switch(secim){
        case 1:
            printf("Eklenecek sayiyi gir  :\n");
            scanf("%d",&sayi);
            push(&root,sayi);
            break;
        case 2:
            pop(&root);
            break;
        case 3:
            peek(root);
            break;
        case 4:
            destroy(root);
            break;
        }
    }
}
