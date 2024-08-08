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
//code for inserion in postion
struct node *  insert(struct node*head,int data,int pos){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    int i=0;
    while (i!=pos-1)
    {
        temp=temp->next;
        i++;
    }
    ptr->data=data;
    ptr->next=temp->next;
    temp->next=ptr;
    return head;
    
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
    head=insert(head,45,2);
      display(head);
}