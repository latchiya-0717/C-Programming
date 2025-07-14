#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*createNode=NULL,*newNode=NULL;
void insert(struct Node **head, struct Node **newNode){
    printf("Enter the number of data: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value: ");
        int val;
        scanf("%d",&val);
        createNode = (struct Node*) malloc(sizeof(struct Node));
        createNode->data=val;
        createNode->next=NULL;
         
        if(*head==NULL)
        {
         *head=createNode;
        }
        else
        {
            (*newNode)->next=createNode;
        }
        (*newNode)=createNode;
         
    }
}
void insertInBtw(struct Node **head){
    struct Node *temp= *head,*createNode=NULL;
    createNode = (struct Node*) malloc(sizeof(struct Node));
    int position;
    printf("Enter the position: ");
    scanf("%d",&position);
    for(int i=0;i<position;i++){
        temp=temp->next;
    }
    createNode->next=temp->next;
    temp->next=createNode;
    // printf("%d",temp->data);
}
void display(){
    struct Node *itr=head;
    while(itr!=NULL)
    {
        printf("%d\n",itr->data);
        itr=itr->next;
    }
}
int main()
{
 int choice;
    while(1){
        printf("\nLinked List Operations Menu:\n1. Create Linked List\n 2. Display Linked List\n 3. Insert the value at Between\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
                case 1:{
                    insert(&head,&newNode); 
                    break;
                }
                case 2:{
                    display(&head,&newNode);
                    break;
                }
                case 3:{
                    insertInBtw(&head);
                    break;
                }
        }
    }   
    
    return 0;
}