#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // use of malloc
    //int *ptr;
    //int n;
    //printf("enter the size of array you want to create\n");
    //scanf("%d", &n);
    //ptr = (int *)malloc(n * sizeof(int));
    //for (int i = 0; i < n; i++)
    //{
    //    printf("Enter the value no %d of this araay\n", i);
    //    scanf("%d", &ptr[i]);
    //}
    //for (int i = 0; i < n; i++)
    //{
    //    printf("The value at %d of this araay is %d\n", i, ptr[i]);
    //}

    //return 0;
//}

// use of calloc
    int *ptr; 
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this araay\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this araay is %d\n", i, ptr[i]);
    }

  // use of realloc
    printf("enter the new size of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr , n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this araay\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this araay is %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}
