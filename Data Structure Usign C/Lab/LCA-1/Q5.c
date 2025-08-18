//  To display records using singly linked list each student should have the following details: Roll no, Name , Marks.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentDetails
{
    int rno;
    char name[30];
    int marks;
    struct studentDetails *next;
};

typedef struct studentDetails *node;

node createNode(int rno, char *name, int marks)
{
    node temp = (node)malloc(sizeof(struct studentDetails));

    temp->rno = rno;
    strcpy(temp->name, name);
    temp->marks = marks;
    temp->next = NULL;
    return temp;
}

node Add(node head, int rno, char *name, int marks)
{

    node temp, temp2;
    temp = createNode(rno, name, marks);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
    return head;
}

void display(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("Roll No: %d\n", temp->rno);
        printf("Name: %s\n", temp->name);
        printf("Marks: %d\n", temp->marks);
        temp = temp->next;
    }
}

int main()
{

    node head = NULL;
    head = Add(head, 25, "Saichandan", 80);
    display(head);

    return 0;
}