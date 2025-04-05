#include <stdio.h>
#include <string.h>
typedef struct driver
{
    char name[34];
    char dlno[44];
    char route[47];
    int kms;

} dr;
int main()
{
    struct driver d1,d2,d3;
    printf("Enter the details of the drivers\n");

    printf("Enter the name of the Driver no 1\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of the first driver\n");
    scanf("%s", &d1.dlno);

    printf("Enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of the first driver\n");
    scanf("%d", &d1.kms);

    printf("Enter the name of the Driver no 2\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of the second driver\n");
    scanf("%s", &d2.dlno);

    printf("Enter the route of the second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of the second driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the name of the Driver no 3\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of the third driver\n");
    scanf("%s", &d3.dlno);

    printf("Enter the route of the third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the kms of the third driver\n");
    scanf("%d", &d3.kms);


    printf("*****printing information of the drivers:*****\n");
    printf("for driver no 1:\n name is %s\n", d1.name);
    printf("dlno is %s", d1.dlno);
    printf(" Route is %s", d1.route);
    printf(" kms is %d", d1.kms);

    printf("for driver no 2:\n name is %s\n", d2.name);
    printf("dlno is %s", d2.dlno);
    printf(" Route is %s", d2.route);
    printf(" kms is %d", d2.kms);

    printf("for driver no 3:\n name is %s\n", d3.name);
    printf("dlno is %s", d3.dlno);
    printf(" Route is %s", d3.route);
    printf(" kms is %d", d3.kms);
    return 0;
}