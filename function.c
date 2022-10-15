#include <stdio.h>

/*  First function
    1:- With Arguments and with return Value
*/

// Declaration, Definition and Call

int sum(int a, int b); // Function ko Declare kar diya

// 2:- with Arguments without return value

void printstar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // inner for loop
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 3:- Without Arguments and with return value

int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}

// 4:- Without Arguments and without return value

void printPattern()
{
    int n;
    printf("Enter the rows you are printed \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                printf("-");
            else
                printf("*");
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 9;
    b = 87;
    // c = sum(a, b); // Call the function
    // printf("%d", c);
    // printstar(8);
    // c = takenumber();
    // printf("The number entered is %d \n", c);

    printPattern();
    // printf("The pattern is \n", printPattern());
    return 0;
}

// Definition of Function

int sum(int a, int b)
{
    return a + b;
}