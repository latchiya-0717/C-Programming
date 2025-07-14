#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
struct Node* createNodes(int n) {
    struct Node *head=NULL,* createNode=NULL,*prevNode=NULL;
    int val;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
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
    return head;
};
void displayList() {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice;
    while(1){
        printf("\nLinked List Operations Menu:\n1. Create Linked List\n 2. Display Linked List\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
                case 1:{
                    createNodes(head); 
                    break;
                }
                case 2:{
                    displayList(head);
                    break;
                }
        }
    }
    // struct Node* head = createNodes(n);
    return 0;
}
