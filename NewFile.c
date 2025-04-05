#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *ptr = NULL;
    /*reading a file*/
    //ptr = fopen("mynewfile.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character i read was %c\n", c);

    //char str[7];
    //fgets(str, 7, ptr);
    //printf("The string is %s\n", str);


    /*writting a file*/
    ptr = fopen("mynewfile.txt", "w");
    fputc('e', ptr);
    fputs("this is sadman", ptr);

    fclose(ptr);


    return 0;
}