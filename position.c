#include<stdio.h>

int main()
{
    //char a = '3';
    //char* ptra = &a;
    //printf("%x\n", ptra);
    //ptra++;
    //printf("%x\n", ptra);
    //printf("%x\n", ptra+1);
    int arr[] = {1,2,3,4,5,6,67};
    printf("value of position 5 of the array is %d\n", arr[5]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of third element of the array is %d\n", &arr[2]);



    
    printf("The value of address of first element of the array is %d\n", *(&arr[0]));
    printf("The value of address of second element of the array is %d\n", *(&arr[1]));
    printf("The value of address of third element of the array is %d\n", *(&arr[2]));
    return 0;
}
