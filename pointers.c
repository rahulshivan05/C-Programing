#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Let's learn about pointers.\n");
    int a = 76;
    int *ptr = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptr);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptr);
    printf("The address of some garbage value is %p\n", ptr2);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", a);
    return 0;
}
