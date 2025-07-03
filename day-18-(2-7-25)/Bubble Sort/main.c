// #include <stdio.h>

// int main()
// {
//     int n=5,temp;
//     int arr[5]={5,4,3,2,1};
//     for(int i=0;i<n-1;i++){
     
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n=5,temp;
    int arr[5]={5,4,3,2,1};
    for(int i=0;i<n-1;i++){
     
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}