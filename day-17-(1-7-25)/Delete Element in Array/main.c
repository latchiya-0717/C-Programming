#include <stdio.h>

int main()
{
    int size=5;
    // printf("Enter the size of the Array:");
    // scanf("%d",&size);
    int arr[5]={1,2,3,4,5};
    int index=1;
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
        
    }
    for(int i=0;i<size-1;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
