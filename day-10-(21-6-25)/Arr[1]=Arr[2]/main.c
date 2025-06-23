#include <stdio.h>
int main()
{
    int n;
    int a;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++){
            printf("%d\n",arr2[i]);
    }
        
    
    return 0;
}
