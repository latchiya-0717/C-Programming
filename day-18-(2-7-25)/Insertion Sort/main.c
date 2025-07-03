#include <stdio.h>

int main()
{
    int n=5;
    int arr[5]={5,4,3,2,1};
    for(int i=0;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && key < arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}