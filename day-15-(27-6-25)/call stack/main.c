#include <stdio.h>
int print(int n){
    if(n==0)
    return 5;
    print(n-1);
    printf("%d",n);
}
int main()
{
    print(5);
    return 0;
}