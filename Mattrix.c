#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    int a[2][3], b[3][3], result[2][3];
    printf("Enter the first mattrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d element of the first mattrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second mattrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d element of the first mattrix\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // calculate the mattrix
            for (size_t e = 0; e < 3; e++)
            {
                sum += a[i][e] * b[e][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    // print the resultant mattrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //print the rasult
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}