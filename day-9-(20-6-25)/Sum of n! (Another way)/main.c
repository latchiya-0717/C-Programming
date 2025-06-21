#include <stdio.h>

int main()
{
    int val,sum=0;
    printf("Enter the value:");
    scanf("%d", &val);      

    while (val > 0) {      
        int num = val % 10;  
        int pro=1;
        

        for (int i = num; i>0; i--) {
            pro *= i;
        }
        
        val /= 10; 
        sum+=pro;
        //printf("%d\n", pro);             
                  
    }
    printf("%d",sum);
    
    return 0;
}
