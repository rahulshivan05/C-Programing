#include <stdio.h>

int main()
{
    char a, b, c;
    int i = 0;

    while (i < 3)
    {
        printf("Enter the value of a\n");
        scanf("%c", &a);
        printf("------------------%d", i);
        printf("Enter the value of b\n");
        printf("------------------**********%d", i);
        scanf("%c", &b);

        printf("Enter the value of c\n");
        scanf("%c", &c);

        i = i + 1;
    }

    return 0;
}
