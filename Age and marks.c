#include <stdio.h>

int main()
{
    int age, marks;
      printf("Enter your age\n");
      scanf("%d", &age);

      printf("Enter your marks\n");
      scanf("%d", &marks);
      switch (age)
      {
        case 13:
           printf("the age is 13\n");
           switch (marks)
           {
           case 50:
             printf("your mark is 50");
            break;
           
           default:
           printf("your mark is not 50");
            break;
           }
        break; 
        
        case 14:
           printf("the age is 14\n");
           switch (marks)
           {
           case 51:
           printf("your mark is 51");
            break;
           
           default:
           printf("your mark is not 51");
            break;
           }
        break;

        case 15:
           printf("the age is 15\n");
           switch (marks)
           {
           case 52:
           printf("your mark is 52");
            break;
           
           default:
           printf("your mark is not 52");
            break;
           }
         
        

        break;
      
      default:
      printf("age is not 13, 14 or 15\n");
        break;
      }
      return 0;
}