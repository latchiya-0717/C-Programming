#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int a;
    printf("Enter the Array:");
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                printf("Duplicate=%d\n",arr[i]);
                a=1;
                break;
            }
        }
    }
    return 0;
}
