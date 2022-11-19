#include <stdio.h>

// int b = 34; // This is a Global Variable and use in any function.

int func1()
{
    /* If i am not defined the static myvar then it automatically take it 0.  */

    static int myvar = 45;

    printf("The value of b inside func1 is %d\n", myvar);

    myvar++; // Increment the myvar in func1.

    // printf("The address of b in func1 is %d\n", &b);

    return myvar;
}

int main(int argc, char const *argv[])
{
    // int b = 344;
    // printf("The address of b in func1 is %d\n", &b);
    int val = func1();
    val = func1();
    val = func1();
    val = func1();
    val = func1();
    // int *ptr = &val;
    // printf("The value of func1 is %d.\n", val);
    return 0;
}
