#include <stdio.h>

int main()
{
      printf("Hello World\n");
      int i, age;
      for (i = 0; i < 10; i=i+1)
      {
        printf("%d\enter your age\n", i);
        scanf("%d", &age);
        //if (age>10)
        //{
        //    break;
        //}
        if (age>10)
        {
            continue;
        }
        printf("we have not come any continue statements");
        printf("we have not come any continue statements");
        printf("we have not come any continue statements");
        printf("we have not come any continue statements");
        printf("we have not come any continue statements");
      }
      
      return 0;
}
