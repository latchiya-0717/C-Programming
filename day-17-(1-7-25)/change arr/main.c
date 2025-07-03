#include <stdio.h>
int change(int *a){
    *a+=1;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    // change(arr);
    // change(arr);
    // change(arr);
    // printf("%d\n",*(1+arr));
    // printf("%d\n",1+*arr);
    // printf("%d\n",arr[0]);
    for(int i=0;i<5;i++)
        printf("%d\n",arr[i]);
    return 0;
}
