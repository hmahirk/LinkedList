#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "linkedlist.h"

void insertAtBeginning(nodeptr head,int data){

    nodeptr newptr=malloc(sizeof(node_t));

    if(head==NULL){
        head=newptr;
        head->next=NULL;
        newptr->data=data;
    }
    else{
            newptr->next=head;
            head=newptr;
            newptr->data=data;
    }
}

void insertAtEnd(nodeptr head, int data) {
    nodeptr newptr = malloc(sizeof(node_t));
    if(head==NULL){
        newptr->next=NULL;
        head=newptr;
    }
    else{
        for(nodeptr iter=head;iter!=NULL;iter=iter->next){
            if(iter==NULL){
                iter=newptr;
                newptr->data=data;
                newptr->next=NULL;
            }
        }
    }
}


void insertAtPosition(nodeptr  head, int data, int position){
    nodeptr newnode=malloc(sizeof(node_t));
    nodeptr ptr,prev;
    ptr=head;
    int cnt=0;
    while(ptr!=NULL){
            ptr=ptr->next;
            cnt++;
    }
    if(position==1){
          if (head == NULL)
        {
            head = newnode;
            newnode->next=NULL;
            newnode->data=data;
        }
        else
        {
            ptr=head;
            head=newnode;
            newnode->next=ptr->next;
            newnode->data;
        }
        printf("\nInserted");
    }
     else if (position>1 && position<=cnt)
    {
        ptr = head;
        for (int i = 1;i < position;i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = newnode;
        newnode->next = ptr;
        newnode->data=data;
        printf("\n----INSERTED----");
    }
    else
    {
        printf("Position is out of range");
    }
}
void deletePosition(nodeptr head, int position) {
    nodeptr ptr,preptr;
    int counter=0;
    if(head==NULL){
        printf("List is empty.\n\n");
    }
    else{
            ptr=head;
            if(position==1){
                head=ptr->next;
                printf("Element deleted. \n");
            }
            else{
                while(ptr!=NULL){
                    ptr=ptr->next;
                    counter++;
                }
                if(position>0 && position<=counter){
                    for(int i=1;i<position;i++){
                        preptr=ptr;
                        ptr=ptr->next;
                    }
                    preptr->next=ptr->next;
                }
                else{
                printf("range is out.\n");
            }
            free(ptr);
            printf("that position deleted.\n");
            }

    }

}


void updateNumber(nodeptr head, int data,int update){
    if(head==NULL){
        printf("List is empty\n");
        printf(":No nodes in the list to update\n");
    }
    nodeptr iter;
    iter =head;
    for(iter=head;iter!=NULL;iter=iter->next){
        if(iter->data==data){
            iter->data=update;
            printf("value was detected.\n");
            break;
        }
    }

}

void searchNumber(nodeptr head, int number) {
    nodeptr iter;
    int counter=1;
   if (head == NULL)
    {
        printf("List is empty\n");
        printf(":No nodes in the list\n");
    }
    else{
        for(iter=head;iter!=NULL;iter=iter->next){
            counter++;
            if(iter->data==number){
                printf("Number %d was found on %d.",number,counter);
             break;
            }
        }
    }

}

void display(nodeptr head){
    nodeptr iter;
    iter =head;
    while(iter !=NULL){
        printf("%d ",iter->data);
        iter=iter->next;
    }
    printf("\n\n");
}
