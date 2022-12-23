#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    char c;
    printf("Enter a Character: ");
    scanf("%c", &c);

    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}
