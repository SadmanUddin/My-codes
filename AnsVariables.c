#include <stdio.h>
int b = 34; // this is a global variable bcz it is declared insdie main()
int func1(int b1)
{
    static int myvar = 34;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    //printf("the value of b inside func1 is %d\n", b);
    // printf("the address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("the address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    //printf("the value of func1 is %d", val);
    return 0;
}