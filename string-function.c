#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "rahul ";
    char s2[] = "is a friend of ";
    char s3[] = "ravi.";
    // printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));

    puts(strcat(s1, s2));
    // puts(strlen(s1)); // Throwing error

    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string of s1 is: ");
    // puts(strrev(s1));

    // printf("The reversed string of s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3, strcat(s1, s2));
    // puts(s3);
    return 0;
}
