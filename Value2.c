#include <stdio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, arr[i]);
    }
    //arr[0] = 343; // very important point that if you change any value here, it gets reflected in main()
    return 0;
    
}

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 6251;
    
}

int main()
{
    int arr[] = {23, 13, 3, 4};
    //printf("the value at index 0 is %d\n", arr[0]);
    //func1(arr);
    //printf("the value at index 0 is %d\n", arr[0]);
    func2(arr);
    func2(arr);

    return 0;
}
