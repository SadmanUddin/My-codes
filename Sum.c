#include<stdio.h>
int myfunc(int a, int b)
{
   // auto int sum;
//sum = a+b;
static int myvar;
    printf("The sum is %d\n", myvar);
    myvar++;
    return myvar; 
}
int main()
{
    // declaration - telling the compiler about the variable (no space reserved)
    // defination - declartion + space reservation
    int myvar = myfunc(3,5);
    printf("The sum is %d\n", myvar);

    return 0;
}