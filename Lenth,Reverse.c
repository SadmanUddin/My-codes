#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "sadman";
    char s2[] = "uddin";
    char s3[54];
    printf("the strcmp for s1, s2 returned %d\n", strcmp(s1, s2));
    puts(strcat(s1, s2));
    printf("the length of s1 is %d\n", strlen(s1));
    printf("the length of s2 is %d\n", strlen(s2));
    printf("the reverse string of s1 is: ");
    puts(strrev(s1));
    printf("the reverse string of s2 is: ");
    puts(strrev(s2));

    //strcpy(s3 ,strcat(s1 , s2));
    //puts(s3);

    return 0;
}

