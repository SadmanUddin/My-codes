#include <stdio.h>

int main()
{
    //label:
    //printf("we are inside label");
    //goto end;
    //  printf("Hello World\n");  
    //goto label;  
    //end:
    //printf("we are inside end");

    int i,j, num;
    for ( i = 0; i < 7; i++)
    {
        printf("%d\n", i);
        for ( j = 0; j < 7; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
            }
            
        }
        


    }
    end:

      return 0;
} 