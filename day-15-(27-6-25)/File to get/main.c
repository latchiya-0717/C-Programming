#include <stdio.h>
int main()
{
    FILE *fpw;
    fpw= fopen("Text.txt","w");
    fputs("Latchiya is a good girl",fpw);
    fclose(fpw);
    FILE *fp;
    fp=fopen("Text.txt","r");
    if(fp!=NULL){
        //printf("File is Working");
        char str[200];
        //To get all lines in the text file
        while(fgets(str,200,fp))
            printf("%s",str);
    }
    return 0;
}