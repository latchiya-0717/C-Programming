#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL,*createNode=NULL;
void push(int val)
{
    createNode=(struct node*)malloc(sizeof(struct node));
   
        createNode->data=val;
        createNode->next=top;
        top=createNode;
}
void pop(){
    struct node *temp=top;
    top=top->next;
    free(temp);
}
void display() {
    struct node *temp = top;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    printf("Original Stack:");
    display();
    printf("\n");
    pop();
    printf("Updated Stack:");
    display();

    return 0;
}