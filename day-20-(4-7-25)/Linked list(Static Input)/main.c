#include <stdio.h>
#include <stdlib.h>
//deviate to the node point(Storage area)
struct Node{
    int data;
    struct Node *next;
};
int main()
{
    //create the node
    struct Node *head=NULL,* createNode=NULL,*newNode=NULL;
    //creates the address
    createNode=(struct Node*)malloc(sizeof(struct Node));
    createNode -> data=10;
    createNode -> next=NULL;
    head=createNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    createNode->next=newNode;
    newNode -> data=20;
    newNode->next=NULL;
    printf("%d",head->data);

    return 0;
}