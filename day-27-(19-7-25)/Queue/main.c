#include <stdio.h>
int size;
int queue[100];
int front=-1,rear=-1;

void enqueue(int val)
{
    if(rear==size-1)
    {
        printf("The Queue is Full\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=val;
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("The queue is Empty");
        return;
    }
    front++;
    printf("Deleted the Data\n");
}

void display()
{
    for(int i=0;i<size;i++){
        printf("%d",queue[i]);
        }
}
int main()
{
    int n,val;
    printf("Enter the Size of the Queue:  ");
    scanf("%d",&size);
    while(1)
    {
        printf(" 1)Enqueue\n 2)Dequeue\n 3)Display\n");
        printf("Enter the Choice:  ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value: ");
                scanf("%d",&val);
                display();
                enqueue(val);
            }
            case 2:{
                dequeue();
                display();
            }
            case 3:{
                display();
                }
        }
    }

    return 0;
}