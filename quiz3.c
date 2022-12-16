#include <stdio.h>

int even_sum;

int even(void)
{
    int n = 0, i = 0, odd_sum;
    printf("Enter How much even number you wanted to print.\n");
    scanf("%d", &n);
    n = 2 * n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            even_sum = even_sum + i;
            // printf("The sum of %d even numbers is %d\n", n, even_sum);
        }
        // printf("%d ", i);
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int choice;
    printf("Enter the Input from 1 to 3\n");
    scanf("%d", &choice);

    // switch (choice)
    // {
    // case 1:
    //     printf("Case 1 is executed. Addtion of 10 even numbers.\n");
    //     break;
    // case 2:
    //     printf("Case 2 is executed. Addtion of 5 odd numbers.\n");
    //     break;
    // case 3:
    //     printf("Case 3 is executed. Multipliation of 10 numbers.\n");
    //     break;

    // default:
    //     printf("Invalid Input\n");
    //     break;
    // }

    if (choice == 1)
    {
        // printf("1 is exeuted.\n");
        even();
        printf("\nSum of all even number is = %d\n", even_sum);
    }
    else if (choice == 2)
    {
        printf("2 is exeuted.\n");
    }
    else if (choice == 3)
    {
        printf("3 is exeuted.\n");
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}
