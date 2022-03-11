#include <stdio.h>

int main()
{
    FILE *fp=fopen("file1.txt","a");//creating a file pointer pointing to file1.txt and opening in append mode
                                    //we can append only cannot read.cursor is at end
    if(fp)
        printf("file opened successfully:\n");//if file1.txt is there,then opens in append mode and previous content is not deleted 
    else
        printf("file is not present and not opened:");//if file1.txt is not there,then new file is created and we can write contents
    

    return 0;
}
