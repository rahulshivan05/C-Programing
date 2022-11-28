#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 345;
    float b = 8.45;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    // printf("The value of b is %f\n", b);
    return 0;
}
