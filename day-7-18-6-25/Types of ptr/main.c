#include <stdio.h>
#include<stdlib.h>
int main()
{
    //Simple pointer
    int a=10,b=9;
    //int *ptr=&a;
    
    //Null pointer
    int *ptr1=NULL;
    
    //void pointer(Void-Data type)
    void *ptr=&a;//(Can't driven data in this)
    //printf("%p",ptr);
   // printf("%p\n",ptr);//(When you try to retirve a data it gives a d reference error)
    
    //Wild pointer
    int *wildptr;
   // printf("%p\n",wildptr);//(Pointer without data but address will be displayed)
    
    //Dangling Pointer
    int *dptr=malloc(sizeof(int));
    printf("%p\n",dptr);
    *dptr=35;
    printf("%d\n",*dptr);
    printf("%p\n",dptr);
    free(dptr);
    dptr=NULL;
    printf("%d\n",*dptr);
    printf("%p",dptr);
    return 0;
}

