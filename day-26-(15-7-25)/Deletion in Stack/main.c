#include <stdio.h>

int top=-1, size=5;
int stack[5];
int val;
void push(int val)
{
    if (top+1==size)
    printf("The stack is full");
    else
    stack[++top]=val;
}

void pop()
{
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        stack[top--];
    }
}
int main()
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value :");
        scanf("%d", &val);
        push(val);
    }
    printf("View 1\n");
    for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
        printf("\n");
    pop(1);
    printf("View 2\n");
    for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
        printf("\n");

    return 0;
}