#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want Multiplication table of: \n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    // Print table using For Loop
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d * %d = %d\n", num, i, num * i);
    // }

    // Print table using While Loop

    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d\n", num, i, (num * i));
        i++;
    }

    return 0;
}
