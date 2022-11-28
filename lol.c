#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // ---------------- Question 1 ---------------------

    // int i;

    // for (i = 0; i <= 10; i++)
    // {
    //     printf("%d", i);
    //     if (i <= 5)
    //     {
    //         break;
    //         printf("%d", i);
    //     }
    // }
    // printf("Out of the loop.\n");

    // ------------- Question 2 -------------------

    // int a = 10;
    // do
    // {
    //     if (a == 15)
    //     {
    //         a = a + 1;
    //         continue;
    //     }
    //     printf("The value of a is %d\n", a);
    //     a++;

    // } while (a <= 20);

    // ------------------------ Question 3 ------------------------

    int i;
    for (i = 0; i < 10; i++)
    {
        if (i > 5)
        {
            exit(0);
        }
        printf("This is inside loop\n");
        printf("The value of a is %d\n", i);
    }

    return 0;
}
