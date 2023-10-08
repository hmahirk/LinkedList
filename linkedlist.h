#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct node{

    int data;
    struct node *next;

}node_t;

typedef node_t * nodeptr;


void insertAtBeginning(nodeptr head,int data);
void insertAtEnd(nodeptr head, int data);
void insertAtPosition(nodeptr head, int data,int position);
void deletePosition(nodeptr head,int position);
void updateNumber(nodeptr head, int data,int update);
void searchNumber(nodeptr head, int number);
void display(nodeptr head);


#endif // LINKEDLIST_H_INCLUDED
