#include <stdio.h>

int main()
{
    FILE *fp=fopen("file1.txt","w");//creating a file pointer pointing to file1.txt and opening in write mode
                                    //we can write only but cannot read 
    if(fp)
        printf("file opened successfully:\n");//if file1.txt is there,then erases the previous contents and we can write new contents
    else
        printf("file is not present and not opened:");//if file1.txt is not there,then new file is created and we can write contents
    

    return 0;
}
