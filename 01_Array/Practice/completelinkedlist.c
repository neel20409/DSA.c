#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node* next;
};
  
// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {  
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to traverse and display the linked list
void display(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Function to insert a node at a given position
struct node* insert(struct node* head, int data, int pos) {
    struct node* newNode = createNode(data);

    // If inserting at the head
    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }

    struct node* temp = head;
    int i = 0;
    while (i != pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    // If the position is out of bounds
    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Function to delete a node at a given position
struct node* deleteNode(struct node* head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }

    struct node* temp = head;

    // If the head needs to be removed
    if (pos == 0) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Find the previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    // If the position is more than the number of nodes
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds\n");
        return head;
    }

    // Node temp->next is the node to be deleted
    struct node* next = temp->next->next;

    // Unlink the node from the linked list
    free(temp->next);

    temp->next = next;
    return head;
}

int main() {
    struct node* head = createNode(35);

    head = insert(head, 24, 0);
    head = insert(head, 78, 0);
    head = insert(head, 88, 0);
      
    printf("Original Linked List: ");
    display(head);

    head = deleteNode(head, 3 );
    printf("After deleting node at position 3: ");
    display(head);

    // Free the allocated memory
    struct node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
  