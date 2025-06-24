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
        int count=0;
        if(arr2[i]){
            continue;
        }
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr2[j]=1;
            }
            
        }
        //if(count>0)--> only duplicate values
        if(count==0){ //other than duplicate
                printf("%d\n",arr[i]);

        }
    }
    
    return 0;
}