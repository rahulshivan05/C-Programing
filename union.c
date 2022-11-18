#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} sl1;

/* Union me Memory share hota ha sabka sath. Aur ek time par koi ek hi kaam hoga */

union Student2
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} sl2;

int main(int argc, char const *argv[])
{
    /* Find the Memory Taken by Both Structure and Union. */

    // printf("Size of Structure sl1 = %d byte.\n", sizeof(sl1));
    // printf("Size of Union sl2 is = %d byte.\n", sizeof(sl2));

    sl1.id = 1;
    sl1.marks = 45;
    sl1.fav_char = 'c';
    strcpy(sl1.name, "Rahul");

    sl2.id = 2;
    sl2.marks = 55;
    sl2.fav_char = 'A';
    strcpy(sl2.name, "Mohit");

    /* Example of Structure */

    printf("The ID of sl1 is %d\n", sl1.id);
    printf("The marks of sl1 is %d\n", sl1.marks);
    printf("The Fav_char of sl1 is %c\n", sl1.fav_char);
    printf("The Name of sl1 is %s\n", sl1.name);

    printf("\n\n");

    /* Example of Union */

    printf("The ID of sl1 is %d\n", sl2.id);
    printf("The marks of sl1 is %d\n", sl2.marks);
    printf("The Fav_char of sl1 is %c\n", sl2.fav_char);
    printf("The Name of sl1 is %s\n", sl2.name);

    return 0;
}
