#include <stdio.h>
#include "tutorial56.c"
#define PI 3.14 
#define square(r) r*r
int main()
{
    float var = PI;
    int r = 4;
    printf("The value of PI is %f\n", var);
    printf("The area of the circle is %f\n", PI * square(r));
    return 0;
}