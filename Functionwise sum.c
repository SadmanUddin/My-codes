#include<stdio.h>
#include<stdlib.h>
int sum (int a, int b)
{
    return a + b;
}

void greethelloexecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}
void greetgmandexecute(int (*fptr)(int, int))
{
    printf("good  morning user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}
int main()
{
    int (*ptr)(int,int);
    ptr = sum;
    greethelloexecute(ptr);
    return 0;
}