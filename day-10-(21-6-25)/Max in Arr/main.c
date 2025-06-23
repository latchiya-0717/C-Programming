#include <stdio.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    int max=0;
    printf("Enter the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d",max);
    
    return 0;
}
