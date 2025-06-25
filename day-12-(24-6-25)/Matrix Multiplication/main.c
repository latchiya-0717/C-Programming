#include <stdio.h>

int main()
{
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(r1!=r2 || c1!=c2){
        printf("Enter the proper Rows and Columns");
    }
    int mat1[r1][c1],mat2[r2][c2],res[r1][c1];
    printf("Matrix 1 Values:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Matrix 2 Values:");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                res[i][j]+=mat1[i][k]*mat2[k][j];
                
            }
            
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }


    return 0;
}