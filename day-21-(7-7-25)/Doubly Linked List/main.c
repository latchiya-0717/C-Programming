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
    struct node *itr=head;
    printf("All node values:\n");
    while(itr != NULL) {
        printf("%d ", itr->data);
        itr = itr->next;
    }

    return 0;
}