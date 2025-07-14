
#include <stdio.h>
#include <stdlib.h>
int itmid=1;

struct Product{
    int productId,quantity;
    char name[30];
    struct Product *next;
};
void createProduct(struct Product **head,struct Product **PrevNode)
{
    //create Code
    printf("Enter the number of product: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //create address and store it in the create node 
        struct Product *createPro = (struct Product*) malloc(sizeof(struct Product));
        
        createPro->productId=itmid++;
        printf("Enter the Product Name:");
        scanf("%s",createPro->name);
        printf("Enter Quantity:");
        scanf("%d",&createPro->quantity);
        createPro->next=NULL;
        if(*head==NULL)
        {
         *head=createPro;
        }
        else
        {
            (*PrevNode)->next=createPro;
        }
        (*PrevNode)=createPro;
         
    }
}
 void displayProduct(struct Product **head){
    //displaycode
    struct Product *itr=*head;
    while(itr!=NULL)
    {
        printf("Product Id : %d\n",itr->productId);
        printf("Name : %s\n",itr->name);
        printf("Quantity : %d\n",itr->quantity);
        itr=itr->next;
    }
 }

int main()
{
    struct Product *head=NULL,*createPro=NULL,*prevNode=NULL;
    while(1)
    {
        int n;
        printf(" 1)Create New Product\n 2)Display All Product\n");
        printf("Enter the Choice");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                createProduct(&head,&prevNode);
                break;
            }
            case 2:{
                displayProduct(&head);
                break;
            }
        }
    }

    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
// };
// struct Node *head=NULL,*createNode=NULL,*newNode=NULL;
// void insert(struct Node **head, struct Node **newNode){
//     printf("Enter the number of data: ");
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the value: ");
//         int val;
//         scanf("%d",&val);
//         //create address and store it in the create node 
//         createNode = (struct Node*) malloc(sizeof(struct Node));
//         createNode->data=val;
//         createNode->next=NULL;
//         if(*head==NULL)
//         {
//          *head=createNode;
//         }
//         else
//         {
//             (*newNode)->next=createNode;
//         }
//         (*newNode)=createNode;
         
//     }
// }
// void insertAtPosition(struct Node **head){
//     struct Node *temp= *head,*createNode=NULL;
//     createNode = (struct Node*) malloc(sizeof(struct Node));
//     int position,value;
//     printf("Enter the value:");
//     scanf("%d",&value);
//     printf("Enter the position: ");
//     scanf("%d",&position);
//     createNode->data=value;
//     createNode->next=NULL;
//     if(position==1){
//         createNode->next=*head;
//         *head=createNode;
//     }
//     else{
//         for(int i=1;i<position-1;i++){
//         temp=temp->next;
//         }
//         createNode->next=temp->next;
//         temp->next=createNode;
        
//     }
    
// }
// void display(){
//     struct Node *itr=head;
//     while(itr!=NULL)
//     {
//         printf("%d\n",itr->data);
//         itr=itr->next;
//     }
// }
// int main()
// {
//  int choice;
//     while(1){
//         printf("\nLinked List Operations Menu:\n1. Create Linked List\n 2. Display Linked List\n 3. Insert the value at Between\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//                 case 1:{
//                     insert(&head,&newNode); 
//                     break;
//                 }
//                 case 2:{
//                     display(&head,&newNode);
//                     break;
//                 }
//                 case 3:{
//                     insertAtPosition(&head);
//                     break;
//                 }
//         }
//     }   
    
//     return 0;
// }
