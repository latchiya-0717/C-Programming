#include <stdio.h>
#include <stdlib.h>
//deviate to the node point(Storage area)
struct Node{
    int data;
    struct Node *next;
};

int main()
{
    //creaate the node
    struct Node *head=NULL,* createNode=NULL;
    //creates the address
    createNode=(struct Node*)malloc(sizeof(struct Node));
    //printf("%p",creatNode);
    createNode -> data=7;
    createNode -> next=NULL;
    head=createNode;
    printf("%d",head -> data);
    return 0;
}