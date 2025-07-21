#include <stdio.h>
int top=-1;
int size=10;
int stack[10];
void push(int val){
    if(top+1==size)
        printf("The Stack is full");
    else
        stack[++top]=val;
}
void pop(){
    if(top==-1){
        printf("Stack is empty");
        return;
    }
    else{
        top--;
        printf("Popped value\n");
    }
}
void display(){
    for(int i=top;i>=0;i++){
        printf("%d\n",stack[i]);
    }
}
int main()
{
    push(5);
    push(10);
    push(20);
    pop(5);
    return 0;
}

// #include <stdio.h>

// int top=-1, size=5;
// int stack[5];
// int val;
// // for (int i=0 ; i<size; i++){
// //     scanf("%d",&val)
// // }
// void push(int val)
// {
//     if (top+1==size)
//     printf("The stack is full");
//     else
//     stack[++top]=val;
// }

// void pop()
// {
//     if (top==-1)
//     {
//         printf("stack is empty");
//     }
//     else
//     {
//         stack[top--];
//     }
// }
// int main()
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter value :");
//         scanf("%d", &val);
//         push(val);
//     }

//     printf("View 1\n");
//     for (int i = top; i >= 0; i--)
//         {
//             printf("%d\n ", stack[i]);
//         }
//         printf("\n");
//     pop(3);
//     printf("View 2\n");
//     for (int i = top; i >= 0; i--)
//         {
//             printf("%d\n ", stack[i]);
//         }
//         printf("\n");

//     return 0;
// }