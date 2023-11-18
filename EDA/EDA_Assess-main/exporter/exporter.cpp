#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];//这个数组是用于输入文件
    FILE *fpWrite=fopen("data.txt","w");//创建一个文件类型的指针，对文件以可写的权限打开
    if(fpWrite==NULL)
        return 0;
    printf("请输入你要写进data文件的内容:");
    gets(str1);//输入对应数据
    for(int i=0;i<strlen(str1);i++)
        fprintf(fpWrite,"%c",str1[i]);//打印显示出刚刚写入的文件
    fclose(fpWrite);//将创建的指针删除
    char str2[100];
    FILE *fpRead=fopen("data.txt","r");//创建一个文件类型的链接以可读的方式打开
    if(fpRead==NULL)
        return 0;
    int i=0;
    printf("data文件中的内容是:");
    while(fscanf(fpRead,"%c",&str2[i])!=EOF)//输入内容
    {
        printf("%c",str2[i]);
        i++;
    }
    printf("\n");
    getchar();
    return 1;
}