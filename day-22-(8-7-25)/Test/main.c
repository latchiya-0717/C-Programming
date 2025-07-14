#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnode=NULL, *next=NULL, *head=NULL, *newnode=NULL, *newnode2=NULL, *newnode3=NULL;
int main()
{
    createnode=(struct node*)(malloc(sizeof(struct node)));
    createnode -> data=10;
    createnode -> next=NULL;
    head=createnode;
    
    newnode=(struct node*)(malloc(sizeof(struct node)));
    newnode -> data=20;
    newnode->next=NULL;
    createnode -> next=newnode;
    
    newnode2=(struct node*)(malloc(sizeof(struct node)));
    newnode2 -> data=30;
    newnode2->next=NULL;
    newnode -> next=newnode2;
    
    newnode3=(struct node*)(malloc(sizeof(struct node)));
    newnode3 -> data=40;
    newnode3->next=NULL;
    newnode2 -> next=newnode3;
    
    printf("%d ",head->next->data);
    return 0;
}