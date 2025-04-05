#include<stdio.h>
#include<stdlib.h>
int isplaimdrome(int num)
{
    int reversed = 0;
    int originalnumber = num;

    //lets reverse the number
    while (num !=0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    printf("The reversed number is %d\n", reversed);
    if(originalnumber == reversed)
    {
        return 1;
    }
    else{return 0;}
    return 0;
}
int main()
{
    int number;
    printf("Enter a number to check whether it is a palimdrome or note\n");
    scanf("%d", &number);
    //your task is to implement this function
    if (isplaimdrome(number))
    {
        printf("The number is a palimdrome\n");
    }
    else 
    {
        printf("The number is not a palimdrome\n");

    }
    

    return 0;
}