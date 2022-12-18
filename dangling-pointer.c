#include <stdio.h>
#include <stdlib.h>

int a, b, sum; // Global Variable
int *funtionDangling()
{
    // Because of Local Variable
    // int a, b, sum; // throw error at calling (function returns address of local variable)
    a = 34;
    b = 36;
    sum = a + b;
    return &sum;
}

int main(int argc, char const *argv[])
{
    // Case 1: De-allocation of a memory block

    // int *ptr = (int *)malloc(7 * sizeof(int));
    // ptr[0] = 34;
    // ptr[1] = 3454;
    // ptr[2] = 234;
    // ptr[3] = 4;
    // ptr[4] = 5;
    // free(ptr); // ptr is now a dangling pointer.

    // Case 2: Function returning local variable address

    // int *dangPtr = funtionDangling();
    // printf("The address of Function Dangling is %d\n", dangPtr);
    // printf("The address of Function Dangling is %d\n", *dangPtr);
    // dangPtr is now dangling pointer. Because the function is return the address and then local variable is cleared.

    // Case 3: If a variable goes out of scope

    int *danglingPtr3;
    {
        a = 12;
        danglingPtr3 = &a;
    }
    // Here variable is a goes out of scope
    printf("The address of a is: %d\n", &danglingPtr3);

    // and danglingPtr3 is => Dangling Pointer

    return 0;
}
