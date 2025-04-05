#include<stdio.h>

int main()
{
    printf("lets learn about pointers\n");
    int a=76;
    int *ptra = &a;
    int *ptr2;
    printf("The address of pointer of a is %x\n", &ptra);
    printf("The address of some garbage value is %p\n", ptr2);
    printf("The value of a is %p\n", *ptra);
    printf("The value of a is %d\n", a);
    printf("The value of a is %x\n", *ptra);
    return 0;
}
