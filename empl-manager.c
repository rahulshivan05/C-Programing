#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;

    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i + 1);
        scanf("%d", &chars);
        getchar();

        printf("Enter the value of a\n");
        scanf("%c", &a);

        getchar(); // this help you to take your etra char as input like in this Case-> 'Enter'
        // When you press 'Enter' the enter goes to 'b' that cause the (b is not ask any input for u).

        printf("Enter the value of b\n");
        scanf("%c", &b);

        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    // printf("Enter your name here: \n");
    // scanf("%s", &a);
    // printf("Enter your ID: \n");
    // scanf("%d", &chars);
    // printf("Enter your father name: \n");
    // scanf("%s", b);
    return 0;
}
