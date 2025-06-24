#include <stdio.h>

int main() {
    int n;
    printf("Enter the Size of an Array:");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr2[i]=0;
    }
    for (int i = 0; i < n; i++) {
        int val=-1;
        for (int j = i+1; j < n; j++) {
            if(arr[i]-arr[j]==1){
                val=arr[j];
            }
            
        }
        printf("%d\t",val);
        
    }
    
    return 0;
}