#include<stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    
}


int main()
{
    //char str[] = {'s','a','d','m','a','n','\0'};
    //char str[] = "sadman";
    char str[34];
    gets(str);
    printStr(str);
    return 0;
}
