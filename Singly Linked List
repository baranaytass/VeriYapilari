#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node* start;
struct node* temp;

void SonaEkle(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(start==NULL){
        start=newnode;
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void BasaEkle(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=start;
    start=newnode;
}
void ArayaEkle(int x,int y){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;

    temp=start;
    while(temp->data!=y){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void SondanSil(){
    temp=start;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void BastanSil(){
    temp=start->next;
    free(start);
    start=temp;
}
void AradanSil(int x){
    if(x!=start->data){
        int sayi1=0;
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
            if(x==temp->data){
                sayi1=1;
            }
        }
        if (sayi1==0){
            printf("Sayi Bulunamadi...");
        }
        else{
            temp=start;
            while(temp->next->data!=x){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
    }
    else
        BastanSil();
}
void TersCevir(){
    struct node* q;
    struct node* prev=NULL;
    
    temp=start;
    while(temp!=NULL){
        q=temp->next;
        temp->next=prev;
        prev=temp;
        temp=q;
    }
    start=prev;
}
void Yazdir(){
    temp=start;
    while(temp->next!=NULL){
        printf("%d=>",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main()
{
    int x=1;
    while(x==1){
        int sayi,secim,onceki,silinecek;
        printf("\n1- Basa Sayi Ekle");
        printf("\n2- Sona Sayi Ekle");
        printf("\n3- Araya Sayi Ekle");
        printf("\n4- Sondaki Sayiyi Sil");
        printf("\n5- Bastaki Sayiyi Sil");
        printf("\n6- Secili Sayiyi Sil");
        printf("\n7- Sayilari Ters Cevir");
        scanf("%d",&secim);
        switch(secim){
        case 1:
            printf("\nBir Sayi Gir...");
            scanf("%d",&sayi);
            BasaEkle(sayi);
            Yazdir();
            break;
        case 2:
            printf("\nBir Sayi Gir...");
            scanf("%d",&sayi);
            SonaEkle(sayi);
            Yazdir();
            break;
        case 3:
            printf("\nBir Sayi Gir  :");
            scanf("%d",&sayi);
            printf("\nHangi Sayidan Sonra  :");
            scanf("%d",&onceki);
            ArayaEkle(sayi,onceki);
            Yazdir();
            break;
        case 4:
            SondanSil();
            Yazdir();
            break;
        case 5:
            BastanSil();
            Yazdir();
            break;
        case 6:
            printf("Silinecek Sayiyi Gir  :");
            scanf("%d",&silinecek);
            AradanSil(silinecek);
            Yazdir();
            break;
        case 7:
            TersCevir();
            Yazdir();
            break;
        }
    }
}
