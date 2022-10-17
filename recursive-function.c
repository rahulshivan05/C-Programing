#include <stdio.h>

int Fibonacci();
int Fibonacci2();

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main(int argc, char const *argv[])
{
    // Example of Factorial

    // int num;
    // printf("Enter the number you want the factorial of \n");
    // scanf("%d", &num);
    // printf("The factorial of %d is %d\n", num, factorial(num));

    // Fibonacci();
    Fibonacci2();
    return 0;
}

int Fibonacci()
{

    int i, n;

    // initialize first and second terms
    int t1 = 0, t2 = 1;

    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    // print 3rd to nth terms
    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}

// Fibonacci Sequence Up to a Certain Numbe

int Fibonacci2()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}