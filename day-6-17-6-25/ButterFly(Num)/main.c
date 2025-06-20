#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter the value:");
    scanf("%d",&num);
     num=(num*2)+1;
    for(int i=0;i<=num/2;i++){
        if(i<num/2){
        for( int j=0;j<=i;j++){
            printf("%d",j+1);
        }
            for(int s = 0;s<num-((i*2)+2);s++){
                printf(" ");
            }
            for(int k=0;k<=i;k++){
                printf("%d",k+1);
            }}
    else if(i<=num){
        for( int j=0;j<=(num/2)-1;j++){
            printf("%d",j+1);
        }
         for( int j=0;j<=num/2;j++){
            printf("%d",j+1);
    }
    
    }
        
        printf("\n");
    }
    for(int j=(num/2)-1;j>=0;j--){
        if(j==num/2){
        for( int i=0;i<num;i++){
            printf("%d",j-1);
        }}
    
    else if (j<num/2){
        for( int i=0;i<=j;i++){
            printf("%d",i+1);
        }
            for(int s = 0;s<num-((j*2)+2);s++){
                printf(" ");
            }
            for(int k=0;k<=j;k++){
                printf("%d",k+1);
            }}
        
        printf("\n");
    }
}