#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node* cretanode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("faied!!");
        exit(1);
    }
    newnode->data=data;
    newnode->next=NULL:
    return newnode;
}

void display(struct node*head){
    struct node*ptr=head;
    while(ptr!=NULL){
        pritnf("%d->"ptr->data);
        ptr=ptr->next;
    }
    printf("NULL/n");
}
 
struct node*insertnode(struct node*head,int data,int pos)

int main(){
    struct node*head=cretanode(66);
    struct node*second=cretanode(77);
    display(head);
}