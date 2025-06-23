#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,45,7};
    int sum=0;
    for(int i=0;i<5;i++){
        printf("i=%d arr[%d]=%d\n",i,i,arr[i]);  //Array Mapping 
        sum+=arr[i];
        printf("%d\n",sum);// sum of array
    }
    

    return 0;
}