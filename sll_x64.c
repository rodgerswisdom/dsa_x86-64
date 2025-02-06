#include<stdio.h>
/**
 * Singly Linked list
 */
typedef struct Node{
    int data;
    struct Node *next;
};

void main()
{
    struct Node *head = NULL;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *null = NULL;


    one = (struct Node*)malloc(sizeof(struct Node*));
    two = (struct Node*)malloc(sizeof(struct Node*));

    one->data = 1;
    two->data = 2;

    one->next = two;
    two->next = null;

    head = one;



}
