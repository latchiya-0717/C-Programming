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
    struct Node *head=NULL,* createNode=NULL,*prevNode=NULL;
    //creates the address
    
    printf("Enter the number of data: ");
    int n;
    int val;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value: ");
        
        scanf("%d",&val);
        createNode=(struct Node*)malloc(sizeof(struct Node));
        createNode -> data=val;
        createNode -> next=NULL;
        
        if(head==NULL){
            head=createNode;
        }
        else{
            prevNode -> next=createNode;
        }
        prevNode=createNode;
    }
    struct Node *itr=head;
    printf("All node values:\n");
    while(itr != NULL) {
        printf("%d ", itr->data);
        itr = itr->next;
    }
    printf("\n");
    printf("3rd Data is %d",head->next->next->data);

    return 0;
}