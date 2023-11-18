int main()
{
    FILE *fp = NULL;

    fp = fopen("case0.txt",);
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}