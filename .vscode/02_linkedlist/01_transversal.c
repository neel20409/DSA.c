#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
void display(struct node*ptr){
    while( ptr != NULL){
    printf("%d ->", ptr->data);
    ptr=ptr->next;
    }
}


int main(){
    struct node*head;
    struct node*second;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node)); 

    head->data=75;
    head->next=second;
    
    second->data=35;
    second->next=NULL;
    display(head);
}