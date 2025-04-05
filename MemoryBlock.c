#include <stdio.h>
#include <stdlib.h>
int sum = 34;
int *functdangling()
{
    int a, b, sum2;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main2()
{
    // case 1 : de allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 24;
    ptr[1] = 34;
    ptr[2] = 44;
    ptr[3] = 54;
    free(ptr); // ptr is now a dangling pointer
    // case 2 : function returning local variable address
    int * dangptr = functiondangling(); //ptr is now a dangling pointer
    
    int*danglingptr3;
    // case 3 : if a variable goes out of scope
    {
        int a = 12;
        danglingptr3 = &a;
    
    }
    // here variable a goes out of scope which means danglingptr3 is pointng to a locattion which is freed and hence danglingptr3 is a dangling pointerr
     


    return 0;
}