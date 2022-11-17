#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} rahul, rohit, mohit;

// struct Student rahul, rohit, mohit; // Global Variable

void print()
{
    printf("%s", rohit.name);
}

int main(int argc, char const *argv[])
{
    // struct Student rahul, rohit, mohit; // Local Variable
    rahul.id = 1;
    rohit.id = 2;
    mohit.id = 3;

    rahul.marks = 66;
    rohit.marks = 6;
    mohit.marks = 76;

    rahul.fav_char = 'p';
    rohit.fav_char = 'x';
    mohit.fav_char = 'y';

    strcpy(rohit.name, "Rohit Kumar Gupta");
    strcpy(mohit.name, "Mohit Kumar");
    // printf("Rohit got %d marks\n", rohit.marks);
    // printf("Rohit's name is %s\n", rohit.name);
    // printf("Mohit got %d marks\n", mohit.marks);
    // printf("Mohit's name is %s\n", mohit.name);

    print();

    return 0;
}
