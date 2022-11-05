#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int x = 2, y = 3;
    int y1 = add(x, y);
    printf("The result is: %d", y1);
    return 0;
}
