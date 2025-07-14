#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
int main()
{
    struct node *createNode=NULL,*head=NULL,*oldnode=NULL;
    int n=5;
    for(int i=0;i<n;i++){
        int val;
        scanf("%d",&val);
        createNode=(struct node*)(malloc(sizeof(struct node)));
        createNode->data=val;
        createNode->next=NULL;
        if(head==NULL){
            head=createNode;
            createNode->prev=NULL;
        }
        else{
            oldnode->next=createNode;
            createNode->prev=oldnode;
        }
        oldnode=createNode;
    }
    //backward data printing
    struct node *itr=oldnode;
    printf("From back node values:\n");
    while(itr != NULL) {
        printf("%d ", itr->data);
        itr = itr->prev;
    }
    // Forward data printing
    struct node *frt=head;
    printf("\nAll node values:\n");
    while(frt != NULL) {
        printf("%d ", frt->data);
        frt = frt->next;
    }
    return 0;
}