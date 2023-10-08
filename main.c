#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
    nodeptr head=NULL;
    int choice=0;

    while(choice!=8){
    printf("-------Enter one of the following actions---------\n");
    printf("1. Insert node at beginning.\n");
    printf("2. Insert node at the end.\n");
    printf("3. Insert node at a specific position.\n");
    printf("4. Delete Node from any Position.\n");
    printf("5. Update Node Value.\n");
    printf("6. Search element in the linked list.\n");
    printf("7. Display List.\n");
    printf("8. Exit\n");
    printf("---------------------------------------------------\n");


    printf("Enter your choice: ");
    scanf("%d",&choice);
    int data=0,update=0;
    int position=0;
    switch (choice){
    case 1:
        printf("Enter a data that you want to add: ");
        scanf("%d",&data);
        insertAtBeginning(&head,data);
        break;
    case 2:
        printf("Enter a data you want to add at the end");
        scanf("%d",&data);
        insertAtEnd(&head,data);
        break;
    case 3:
        printf("Enter a data you want to add:");
        scanf("%d",&data);
        printf("Enter a position: ");
        scanf("%d",&position);
        insertAtPosition(head,data,position);
        break;
    case 4:

        printf("Enter a position: ");
        scanf("%d",&position);
        deletePosition(head,position);
        break;
    case 5:
        printf("Which number you want to update:");
        scanf("%d",&data);
        printf("Number to update: ");
        scanf("%d",&update);
        updateNumber(head,data,update);
        break;
    case 6:
        printf("Enter a number you are looking for:");
        scanf("%d",&data);

    case 7:
        display(&head);
        break;
    case 8:
        break;
    }
    data=0;
    update=0;
    position=0;
    }

    return 0;
}
