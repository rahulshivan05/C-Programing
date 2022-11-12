#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* First for fun only */

    // int k;
    // for (k = 0; k <= 255; k++) // loop from 0-255
    // {
    //     printf("\nThe ascii value of %c is %d", k, k);
    // }

    int sum = 0;
    char name[25];
    int i = 0;

    printf("Enter a Name: ");
    scanf("%s", &name);

    while (name[i] != '\0')
    {
        printf("\nThe ASCII value of the character %c is %d", name[i], name[i]);
        sum = sum + name[i];
        i++;
    }
    printf("\nSum of the ASCII value of a string is: %d", sum);

    return 0;
}
