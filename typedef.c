#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main(int argc, char const *argv[])
{
    // int a,b;  // isme 'a' hoga pointer aur 'b' hoga int

    typedef int *intp;
    intp a, b;
    int c = 7;
    a = &c;
    b = &c;
    printf("The value b stored in %p\n", b);
    // std s1, s2;
    // s1.id = 5;
    // s2.id = 7;
    // printf("Value of s1's Id is %d\n", s1.id);
    // printf("Value of s2's Id is %d\n", s2.id);

    // typedef unsigned long ul;
    // ul l1, l2, l3;
    // typedef int integer;
    // integer a = 5;
    // printf("Value in a is %d", a);
    return 0;
}
