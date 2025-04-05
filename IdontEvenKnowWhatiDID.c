#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[45];
} std;


int main(int argc, char const *argv[])
{
    std s1,s2;
    s1.id=34;
    s2.id=35;
    printf("value of s1's id is %d\n", s1.id);
    printf("value of s2's id is %d\n", s2.id);
    
    // typedef <previous_name> <alias_name>
    //typedef unsigned long ul;
    //typedef int integer;
    //ul l1, l2, l3;
    //integer a = 4;
    //printf("value of a is %d", a);

    return 0;
}
