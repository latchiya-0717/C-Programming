#include <stdio.h>
int change(int *a){
    *a+=1;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    arr[6]=7;
    printf("%d\n",arr[6]);
    return 0;
}
