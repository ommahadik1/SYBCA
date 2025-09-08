// Write a  C Program for Circular Singly Linked List .

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

// ----------------- Create CSLL -----------------

void createCSLL() {
    struct node *newnode;
    int choice = 1;
    head = NULL;
    tail = NULL;
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data = ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = tail = newnode;
            tail->next = head;
        } else {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
        printf("Do you want to continue (1.Yes / 0.No): ");
        scanf("%d", &choice);
    }
}

// ----------------- Insert at Beginning -----------------

void insertBeg() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data = ");
    scanf("%d", &newnode->data);
    if (head == NULL) {
        head = tail = newnode;
        tail->next = head;
    } else {
        newnode->next = head;
        head = newnode;
        tail->next = head;
    }
}

// ----------------- Insert at End -----------------

void insertEnd() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data = ");
    scanf("%d", &newnode->data);
    if (head == NULL) {
        head = tail = newnode;
        tail->next = head;
    } else {
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
}

// ----------------- Delete Node at the End -----------------

void deleteEnd() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (head->next == head) {
        free(head);
        head = tail = NULL;
        printf("Last node deleted, list is now empty.\n");
        return;
    }
    struct node *temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    temp->next = head;
    free(tail);
    tail = temp;
    printf("Last node deleted successfully.\n");
}

// ----------------- Display CSLL -----------------

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Circular Singly Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// ----------------- Main Menu -----------------

int main() {
    int choice;
    while (1) {
        printf("\n--- Circular Singly Linked List Menu ---\n");
        printf("1. Create CSLL\n");
        printf("2. Insert at End\n");
        printf("3. Delete Last Node\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createCSLL(); break;
            case 2: insertEnd(); break;
            case 3: deleteEnd(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
