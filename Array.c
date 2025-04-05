#include<stdio.h>

int main()
{
    //printf("Hello world\n");
    int marks[4];
    for ( int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of array\n",i);
        scanf("%d", &marks[i]);
    }
     for ( int i = 0; i < 4; i++)
    {
        printf("the value of %d array is %d\n", i, marks[i]);
    }
    //marks[0]=56;
    //printf("Marks of student 1 is %d\n", marks[0]);
    //marks[1]=33333;
    //printf("Marks of student 1 is %d\n", marks[1]);
    //marks[2]=32333;
    //printf("Marks of student 1 is %d\n", marks[2]);
    return 0;
}
//