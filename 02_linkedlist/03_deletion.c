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
struct node*deletenode(struct node*head,int pos){
    struct node *p=head;
    struct node *q=head->next;
     if (pos == 0) {
        head = p->next; // Change head
        free(p); // Free old head
        return head;
    }

   for (int i = 0; i < pos-1; i++)
   {
     p=p->next;
        q=q->next;
   }
   
    p->next =q->next;
    free(q);
    return head;
}


int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node)); 
    third=(struct node*)malloc(sizeof(struct node)); 
    fourth=(struct node*)malloc(sizeof(struct node)); 

    head->data=75;
    head->next=second;
    
    second->data=35;
    second->next=third;

    third->data=66;
    third->next=fourth;

    fourth->data=88;
    fourth->next=NULL;

    printf("\nElements before deletion:- \n");
    display(head);
    
    head=deletenode(head,3);
    printf("\nElement after deletion:- \n");
    display(head);
     printf("\n");
}