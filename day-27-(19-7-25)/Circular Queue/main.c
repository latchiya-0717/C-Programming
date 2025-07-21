#include <stdio.h>
int size;
int queue[100];
int front=-1,rear=-1;

void enqueue(int val)
{
    if(front != -1 && (rear + 1) % size == front)
    {
        printf("The Queue is Full\n");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
        // rear=0;
    }
    else{
        rear=(rear+1)%size;
    }
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
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
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
                enqueue(val);
                display();
                break;
            }
            case 2:{
                dequeue();
                display();
                break;
            }
        }
    }

    return 0;
}