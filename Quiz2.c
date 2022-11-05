#include <stdio.h>

/* Question:- Given to number 'a' and 'b'. add them then,
    Substract them, and assign them to 'a' and 'b'. using
    Call by Refrence
*/

void addNum(int *a1, int *a2)
{
    /* First Option to do */

    // int c;
    // c = *a1 + *a2;
    // int d;
    // d = *a1 - *a2;
    // *a1 = c;
    // *a2 = d;

    /* Second Option to do */
    *a1 = *a1 + *a2;
    *a2 = *a1 - *a2;
}

int main(int argc, char const *argv[])
{
    int a, b;
    // Taking the Value of 'A' from the user.
    printf("Enter the Value of A: \n");
    scanf("%d", &a);

    // Taking the Value of 'B' from the user.
    printf("Enter the Value of B: \n");
    scanf("%d", &b);

    printf("%d and %d\n", a, b);
    addNum(&a, &b);
    printf("%d and %d\n", a, b);

    return 0;
}
