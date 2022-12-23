#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    char name[10] = "Rahul";
    int *p = &x;
    int *p2 = NULL;
    void *p3;
    p3 = &name;
    // printf("The address of x is: %p\n", p);
    // printf("The value of x is: %d\n", *p);
    printf("The address of Name is: %p\n", p3);
    printf("The Name is: %s\n", (char *)p3); // derefrencing the void pointer. TypeCaste into (char *) if
    return 0;
}
