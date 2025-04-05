#include <stdio.h>
#include <stdlib.h>
/*dynamic memory allocation
ABC pvt ltd. manages employee records of the companies
employee id can be of any length and it can contain anyn character
for 3 employees, you have to take length of employee id as input in a length integer variable
then you have to take employee id as an input and display it on screen
store the employee id in a character array which is allocated dynamically
you have to create only one dynamic array
example:
employee 1 :
enter numb of character in your eID
45
dynamically allocate the character array
take input from user

employee 2 :
enter numb of character in your eID
4
dynamically allocate the character array
take input from user

employee 3 :
enter numb of character in your eID
9
dynamically allocate the character array
take input from user

*/
int main()
{
    int chars, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Enter the number of characters in your employee id\n");
        scanf("%d", &chars);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Eter the employee id\n");
        scanf("%s", ptr);
        printf("your employee id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}