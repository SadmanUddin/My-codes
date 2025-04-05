#include <stdio.h>
int main()
{
    int subject;
    printf("The list of exam which you aced has been given below\n");
    printf("1. Iba only\n 2. Varsity only\n 3. Engineering only \n 4. Iba Varsity Engineering \n");
    printf("Choose one of the options above: ");
    scanf("%d", &subject);
    if (subject == 1)
    {
    printf("Hurrayy! You have won a treat from sadman");
    }
    else if (subject == 2)
    {
    printf("Hurrayy! You have won 500 tk from sadman");
    }
    else if (subject == 3)
    {   
    printf("Hurrayy! You have won 500 tk from sadman");      
    }
    else if (subject == 4)
    {
    printf("congratulations! you have won a treat and 500 tk from sadman");
    }
    else
    {
        printf("you got nothing!");
    }
    

    

    return 0;
}
