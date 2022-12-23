#include <stdio.h>
#include <stdbool.h>

int add(int a, int b); // initialise the function
void say_hello();
bool is_even(int n);

int main(int argc, char const *argv[])
{
    // int c = add(10, 20);
    // printf("%d\n", c);
    // say_hello();

    // Example of Boolean in C

    int a;
    printf("Enter any number to check number is ODD or EVEN\n");
    scanf("%d", &a);

    if (is_even(a))
    {
        printf("Number is even!\n");
    }
    else
    {
        printf("Number is odd!\n");
    }

    return 0;
}

bool is_even(int n)
{
    return n % 2 == 0;
}

int add(int a, int b)
{
    return a + b;
}

void say_hello()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Hello World!\n");
    }
}