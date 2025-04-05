#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    char name[20];
    char item[20];
    char outlet[20];
    char letter[30] = "Thanks";

    printf("Please enter your name : ");
    gets(name);
    printf("Please enter the item which was purchased : ");
    gets(item);
    printf("Please enter your outlet name : ");
    gets(outlet);

    ptr = fopen("Letter.txt", "a");
    fprintf(ptr, "%s{{%s}}", letter, name);

    strcpy(letter, "for purchasing");
    fprintf(ptr, " %s{{%s}}", letter, item);

    strcpy(letter, "from our outlet");
    fprintf(ptr, " %s{{%s}}.\n", letter, outlet);

    strcpy(letter, "Please visit our outlet");
    fprintf(ptr, "%s{{%s}}", letter, outlet);

    strcpy(letter, "for any kind of problems. We plan to server you again soon.");
    fprintf(ptr, " %s\n\n", letter);
    fclose(ptr);

    return 0;
}