#include <stdio.h>

int even_sum, odd_sum;

int odd_even(void)
{
    int n = 0, i = 0;
    printf("Enter How much even number you wanted to print.\n");
    scanf("%d", &n);
    n = 2 * n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            // printf("%d ", i);
            even_sum = even_sum + i;
        }
        else
        {
            printf("%d ", i);
            odd_sum = odd_sum + i;
        }
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int choice;
    printf("Enter the Input from 1 to 3\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // printf("1 is exeuted.\n");
        odd_even();
        printf("\nSum of all Even Number is = %d\n", even_sum);
    }
    else if (choice == 2)
    {
        odd_even();
        printf("\nSum of all Odd Number is = %d\n", odd_sum);
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
