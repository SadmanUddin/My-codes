#include<stdio.h>
int main()
{
    // take the number as an input from the user
    int i,num;
    printf("Enter the number you want to multiply\n");
    scanf("%d", &num);
    for (int i = 0; i < 30; i++)
    {
        printf("%d * %d = %d\n", num, i, i*num);
    }
    

    return 0;
}