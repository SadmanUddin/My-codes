#include <stdio.h>

int main()
{
    int age;

      printf("enter your age\n");

      scanf("%d", &age);
      printf("You have entered %d as your age\n", age);
      if (age>18)
      {
        printf("you can vote!");
      }
      else if (age>10)
      {
        printf("you are between 10 to 18 and you can vote for kids!");
      }
      else
      {
        printf("you cannot vote!"); 
      }

      return 0;
} 