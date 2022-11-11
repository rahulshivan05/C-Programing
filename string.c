#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // char str[] = {'r', 'a', 'h', 'u', 'l', '\0'};

    char str[34]; // ban jayaga null terminated character array

    // Taking the string using 'gets()' function
    printf("Taking the string from the User\n");
    gets(str);
    printf("%s\n", str);

    printf("Printing the string using custom Function\n");
    printStr(str);

    printf("Printing the string using puts function\n");
    puts(str);

    return 0;
}
