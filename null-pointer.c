#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    // int *ptr = &a;
    int *ptr;
    int c = 35;

    // error handling when Pointer is NULL
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
    }
    else
    {
        printf("The Pointer is a NULL pointer and cann't be de-refrence");
    }

    return 0;
}
