#include <stdio.h>

int main()
{
    int size=5;
    int arr[50]={1,2,3,4,5};
    int index=3,val=8;

    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    //size++;
    for(int i=0;i<size+1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
