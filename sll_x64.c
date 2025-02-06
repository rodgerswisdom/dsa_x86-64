#include<stdio.h>
#include<stdlib.h>

#define DATA_1 5
#define DATA_2 6

/**
 * Singly Linked list
 */
typedef struct Node
{
    int data;
    struct Node *next;
} Node;


void printlist(Node *p);

void printlist(Node *p)
{
    printf("\n\nList elements are - \n");
    while(p != NULL) {
        printf("%d --->",p->data);
        p = p->next;
    }
}

void main()
{
    Node *head = NULL;
    Node *one = NULL;
    Node *two = NULL;
    Node *null = NULL;


    one = (Node*)malloc(sizeof(Node*));
    two = (Node*)malloc(sizeof(Node*));

    one->data = DATA_1;
    two->data = DATA_2;

    one->next = two;
    two->next = null;

    head = one;

    printlist(head);

}
