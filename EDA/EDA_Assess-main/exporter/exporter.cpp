#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    FILE *fpWrite=fopen("data.txt","w");
    if(fpWrite==NULL)
        return 0;
    printf("请输入你要写进data文件的内容:");
    gets(str1);
    for(int i=0;i<strlen(str1);i++)
        fprintf(fpWrite,"%c",str1[i]);
    fclose(fpWrite);
    char str2[100];
    FILE *fpRead=fopen("data.txt","r");
    if(fpRead==NULL)
        return 0;
    int i=0;
    printf("data文件中的内容是:");
    while(fscanf(fpRead,"%c",&str2[i])!=EOF)
    {
        printf("%c",str2[i]);
        i++;
    }
    printf("\n");
    getchar();
    return 1;
}