#include <stdio.h>

int main()
{
    FILE *fp;
    char b[50], ch;

    fp = fopen("test.txt", "r+");

    if (!fp)
    {
        printf("Error opening file");
        return 1;
    }

    // // Read some bytes from the file
    // fgets(b, sizeof b, fp);

    // puts(b);

    ch = fgetc(fp);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);
}