#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a Character: ");
    scanf("%c", &c);

    printf("ASCII value of %c = %d", c, c);
    return 0;
}
