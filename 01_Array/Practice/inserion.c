#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
void display(struct node*head){
    struct node*ptr=head;
    while(ptr!=NULL){
        printf("->%d",ptr->data);
        ptr=ptr->next;
    }
  
}
struct node * insert(struct node*head,int data,int pos){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
   
      if (pos == 0) {
        ptr->next = head;
        return ptr;
    }
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
    head= (struct node*)malloc(sizeof(struct node));
    head->data=35;
    head->next= NULL;
    head=insert(head,24,1);
    head=insert(head,78,0);
    display(head);

}