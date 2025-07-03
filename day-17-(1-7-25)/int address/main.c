#include <stdio.h>

int main()
{
    //int address increment in 4 bytes and char in 1 byte
    //arr+i = base address + i * sizeof(data type).
    //So, arr+1 = 1024 + 1 * 4 => 1028
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    // printf("%d\n",arr[0]);
    // printf("%d\n",0[arr]);
    // printf("%d\n",*arr);
    printf("%p\n",ptr);
    printf("%p\n",++ptr);
    printf("%p\n",++ptr);
    printf("%p\n",++ptr);
    return 0;
}
