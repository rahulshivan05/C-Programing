#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void changeValue(int *address)
{
    *address = 355;
}

int main(int argc, char const *argv[])
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);

    /* Only for fun */

    // printf("%d\n", &a); // printing the address of 'A'
    // printf("%d\n", &a + 1); // printing the address of 'A'. Then, adding the '+1' means adding 4 bytes.
    // printf("Address of b is: %p\n", &b); // printing the address of 'B'. In Hexa Decimal

    /* Take another Example of Call by Reference */

    int x = 34;
    printf("The Value of X is now: %d\n", x);
    changeValue(&x);
    printf("The Value of X after change Value Function run: %d", x);
    return 0;
}
