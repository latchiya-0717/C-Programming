#include <stdio.h>

int main()
{
    int size=7;
    int arr[7]={1,2,3,4,5,6,7};
    int l=0,r=size-1,ele=17;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==ele){
            printf("The index  is %d",mid);
            break;
        }
        else if(ele>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        printf("Running....");
    }
    return 0;
}  
