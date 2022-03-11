#include <stdio.h>

int main()
{
    FILE *fp=fopen("file1.txt","w+");//creating a file pointer pointing to file1.txt and opening in write+ mode
                                    //we can read and write.
    if(fp)
        printf("file opened successfully:\n");
    else
        printf("file is not present and not opened:");
    char c;
    fputc('q',fp);
    fputc('r',fp);
    fputc('a',fp);
    fputc('v',fp);
    fputc('i',fp);
    fputc('n',fp);
    fputc('d',fp);
    fclose(fp);
    
    fp=fopen("file1.txt","r");
    while((c=getc(fp))!=EOF)
    { 
        printf("%c",c);
    }
    fclose(fp);
        
    return 0;
}
