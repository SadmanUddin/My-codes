#include<stdio.h>

int sum(int a, int b);
void printstar(int n)
{
    for ( int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}
int takeanumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;
}




int main()
{
    int a, b, c;
    a = 87;
    b = 5;
    //c = sum(a, b);
    //printstar(7);
    c = takeanumber();
    printf("the number is  %d\n", c);
    //printf("the sum is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
