#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[45];
};

int main()
{
    struct student sadman, samrat, murad;
    
    sadman.id=1;
    samrat.id=2;
    murad.id=3;
    sadman.marks=90;
    samrat.marks=80;
    murad.marks=70;
    sadman.fav_char='N';
    samrat.fav_char='A';
    murad.fav_char='B';

    strcpy(sadman.name, "sadman uddin student of the year");
    printf("sadman's name is : %s\n", sadman.name);
    
    printf("sadmans id is %d\n", sadman.id);
    printf("samrats id is %d\n", samrat.id);
    printf("murads id is %d\n", murad.id);
    printf("sadman got %d marks\n", sadman.marks);
    printf("samrat got %d marks\n", samrat.marks);
    printf("murad got %d marks \n", murad.marks);
    printf("sadmans favourite char is %d\n", sadman.fav_char);
    printf("samrats favourite char is %d\n", samrat.fav_char);
    printf("murads favourite char is %d\n", murad.fav_char);

        

    


    
    return 0;
}
