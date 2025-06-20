#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int temp=i;
        for(int s=0;s<(n-i)-1;s++)
        {
            printf(" ");
        }
        for (int j=0;j<(i*2)+1;j++)
        {
          
            printf("%d",abs((temp--))+1);
        }
        printf("\n");
    }
    
  

    return 0;
}