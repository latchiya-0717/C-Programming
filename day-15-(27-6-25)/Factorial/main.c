#include <stdio.h>
int fact(int n){
    if(n==1)
    //base case
    return 1;
    //Recursive case
    return n*fact(n-1);
}
int main()
{
    printf("%d",fact(5));

    return 0;
}