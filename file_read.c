#include <stdio.h>

int main()
{
    FILE *fp=fopen("file1.txt","r");//creating a file pointer pointing to file1.txt and opening in read mode
    
    if(fp)
        printf("file opened successfully:\n");//if file1.txt is there,then file opens in read mode
    else
        printf("file is not present and not opened:");//if file1.txt is not there,file pointer returns null

    return 0;
}

