#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j = 0;
    for (i = 0; i < 5;)
    {
        printf("%d %d\n", i, j);
        i++, j++;
    }

    return 0;
}
