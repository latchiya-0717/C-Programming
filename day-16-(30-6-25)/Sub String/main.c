#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="10110";
    int max=0;
    for(int i=0;i<strlen(str);i++)
    {
        int count =0;
        printf("i=%d\n",i);
        for(int j=i;j<strlen(str);j++)
        {
            if(str[j]=='0')
            {
                count-=1;
            }
            else
            {
                count+=1;
            }
            
            if(count==0 && (j-i)+1 > max)
            {
                max=j-i +1;
            }
            
        }
        printf("\n");
    }
    printf("%d",max);

    return 0;
}