#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int m, n, sum = 0;
    // printf("Enter the size of First Matrix.\n");
    // scanf("%d", &n);

    int a[3][4], b[4][2], result[3][2];

    printf("Enter the first matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Second matrix \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculation goes here

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculation the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Showing Output Values given by the User
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", result[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}
