#include<stdio.h>


void changevalue(int* a)
{
    *a = 345;
}
int main()
{
    int a = 34, b = 56;
    printf("the value of a is now %d\n", a);
    changevalue(&a);
    printf("the value of a is now %d\n", a);
    return 0;
}
